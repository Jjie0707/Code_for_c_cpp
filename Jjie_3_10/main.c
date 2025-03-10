#include "stack.h"

int partSort(int *arr ,int start,int end);

//利用非递归实现一次快速排序
void quickSort(int* arr,int start,int end) {
    int ki=partSort(arr,0,end);
    Stack* s=(Stack*)malloc(sizeof(Stack));
    s->bottom=NULL;
    s->top=NULL;
    Push(s,end);
    Push(s,ki+1);
    Push(s,ki-1);
    Push(s,start);
    while (!Empty(s)) {
        int left=Pop(s);
        int right=Pop(s);
        ki=partSort(arr,left,right);
        if (right>ki+1) {
            Push(s,right);
            Push(s,ki+1);
        }
        if (ki-1>left) {
            Push(s,ki-1);
            Push(s,left);
        }
    }
    free(s);
}

//完成一次快速排序（挖坑法）
int partSort(int *arr ,int start,int end) {
    int pit=start;
    int left=start;
    int right=end;
    int key =arr[pit];
    while (left<right) {
        while (arr[right] > key && left<right) {
            right--;
        }
        *(arr+pit)=*(arr+right);
        pit=right;
        while (left<right && arr[left]<key) {
            left++;
        }
        *(arr+pit)=*(arr+left);
        pit=left;
    }
    *(arr+pit)=key;
    return pit;
}

int main(void) {
    // printf("Hello, World!\n");
    int arr[]={49,38,65,97,76,13,27,53};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("排序之前：\n");
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    partSort(arr,0,size-1);
    quickSort(arr,0,size-1);
    printf("\n排序之后:\n");
    for (int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}