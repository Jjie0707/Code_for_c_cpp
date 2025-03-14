#include <stdio.h>

int main(void) {
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    int max=(a>b?a:b)>c?(a>b?a:b):c;
    printf("最大的数字是%d",max);
    // printf("Hello, World!\n");
    return 0;
}