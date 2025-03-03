#include<stdio.h>

void ShellSort(int* arr,int size){
    int gap=size;
    while(gap>0){
        int end=0;
        int tem;
        for(;end<size-gap;end+=gap){
            int tem=arr[end+gap];
            int j=end;
            for(;j>=0;j-=gap){
                if(arr[j]>tem){
                    arr[j+gap]=arr[j];
                }
            else
                break;
        }
        arr[j+gap]=tem;
    }
    gap/=2;
    }
}

void Print(int* arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[]={2,8,4,9,6,1,3,7,0,5};
    printf("这是排序之前的数组：\n");
    Print(arr,sizeof(arr)/sizeof(arr[0]));
    ShellSort(arr,sizeof(arr)/sizeof(arr[0]));
    printf("\n");
    printf("这是排序之后的数组：\n");
    Print(arr,sizeof(arr)/sizeof(arr[0]));
    printf("\n");
    return 0;
}