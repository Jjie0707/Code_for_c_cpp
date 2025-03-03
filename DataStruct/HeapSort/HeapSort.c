#include "Adjust.h"

int main(){
    int arr[]={2,8,4,9,6,1,3,7,0,5};
    printf("这是排序之前的数组：\n");
    Print(arr,sizeof(arr)/sizeof(arr[0]));
    HeapSort(arr,sizeof(arr)/sizeof(arr[0]));
    printf("\n");
    printf("这是排序之后的数组：\n");
    Print(arr,sizeof(arr)/sizeof(arr[0]));
    printf("\n");
    return 0;
}