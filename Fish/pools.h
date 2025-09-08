#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pool.h"

static Pool pools[25];
typedef struct {
    int val;
} count;

//函数指针 作为qsort的参数传入
static int cmp(const void *a, const void *b) {
    return ((const count *)b)->val - ((const count *)a)->val;
}

//初始化鱼塘
static void init(int size) {
    for (int i = 0; i < size; ++i) {
        pools[i].T = rand() % 5 + 1;
        pools[i].F = rand() % 20 + 1;
        pools[i].D = (rand() % pools[i].F + 1) / 2 + 1;
    }
}

//用来打印鱼塘数据的函数
static void show(int size) {
    printf("展示鱼塘:\n");
    for (int i = 0; i < size; ++i)
        printf("%d %d %d\n", pools[i].T, pools[i].F, pools[i].D);
}

//写入文件
static void writeF(const char *s) {
    FILE *fp = fopen("fish.txt", "a");
    if (!fp) { perror("fish.txt"); return; }
    fprintf(fp, "%s\n", s);
    fclose(fp);
}

void fish(int size, int time) {
    //对time和size的合理性检验
    if (!(size >= 2 && size <= 25) || !(time >= 1 && time <= 16)) {
        writeF("最终统计结果，小明路途花费合计0分钟，"
               "在各池塘停留合计0分钟，"
               "总计耗时0分钟，获得鱼量合计0条");
        return;
    }

    time *= 60;  //我们的时间基本单位是分钟 把传入的小时转成分钟

    init(size);
    show(size);

    int bestFish = 0, bestWalk = 0, bestStay = 0;


    //枚举终点
    for (int k = 0; k < size; ++k) {
        int walk = 0;
        for (int i = 0; i <= k; ++i)
            walk += 5 * pools[i].T;
        if (walk >= time) break;    // 后续 k 更大，路程更长


        count counts[1000];
        int cur = 0;

        for (int i = 0; i <= k; ++i) {
            int t = 0;
            while (1) {
                int g = pools[i].F - t * pools[i].D;
                if (g <= 0) break;
                counts[cur++].val = g;
                ++t;
            }
        }


        qsort(counts, cur, sizeof(count), cmp);

        int left = time - walk;
        int curFish = 0, curStay = 0;

        for (int i = 0; i < cur && left >= 5; ++i) {
            curFish += counts[i].val;
            curStay += 5;
            left -= 5;
        }

        if (curFish >= bestFish) {
            bestFish = curFish;
            bestWalk = walk;
            bestStay = curStay;
        }
    }

    char buf[512];
    snprintf(buf, sizeof(buf),
             "最终统计结果，小明路途花费合计%d分钟，"
             "在各池塘停留合计%d分钟，"
             "总计耗时%d分钟，获得鱼量合计%d条",
             bestWalk, bestStay, bestWalk + bestStay, bestFish);
    writeF(buf);
}