#include"Adjust.h"

void Swap(int* e1,int* e2){
    int tem=*e1;
    *e1=*e2;
    *e2=tem;
}

void Print(int* arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void AdjustDown(int* arr,int parent,int size){
    int child=parent*2+1;
    while(child<size)
    {
        if(child+1<size){
            if(arr[child]<arr[child+1])
                child++;
        }
        if(arr[parent] < arr[child]){
            Swap(&arr[parent],&arr[child]);
        }
        parent=child;
        child=parent*2+1;
    }
}

void BuildHeap(int* arr,int size){
    for(int i=(size-1-1)/2;i>=0;i--){
        AdjustDown(arr,i,size);
    }
}

void HeapSort(int* arr,int size){
    //升序构建大堆
    int end=size-1;
    BuildHeap(arr,size);
    for(;end=0)
}