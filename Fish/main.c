#include "pools.h"

int main(void) {
    while (1) {
        int size, time;
        printf("请输入鱼塘的数量:(2 ≤ size ≤ 25)\n");
        if (scanf("%d", &size) != 1) break;
        printf("请输入小明拥有的总时间(单位小时)：\n");
        if (scanf("%d", &time) != 1) break;
        if (size <= 0 || time <= 0) break;
        fish(size, time);
    }
    return 0;
}