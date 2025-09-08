//
// Created by Jjie on 2025/9/3.
//

#ifndef POOLS_H
#define POOLS_H
typedef struct {
    int T;   // 到该池塘所需时间(5min 单位)
    int F;   // 初始 5min 钓鱼量
    int D;   // 每 5min 递减量
} Pool;

#endif