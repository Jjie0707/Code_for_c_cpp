#include<stdio.h>
//这里是直接插入排序的代码
void InsertSort(int* arr,int size){
    int end=0;
    int tem;
    for(;end<size-1;end++){
        int tem=arr[end+1];
        int j=end;
        for(;j>=0;j--){
            if(arr[j]>tem){
                arr[j+1]=arr[j];
            }
            else
                break;
        }
        arr[j+1]=tem;
    }
}

void Print(int* arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[]={2,8,4,9,5,1,3,7,0,5};
    printf("这是排序之前的数组：\n");
    Print(arr,sizeof(arr)/sizeof(arr[0]));
    InsertSort(arr,sizeof(arr)/sizeof(arr[0]));
    printf("\n");
    printf("这是排序之后的数组：\n");
    Print(arr,sizeof(arr)/sizeof(arr[0]));
    printf("\n");
    return 0;
}