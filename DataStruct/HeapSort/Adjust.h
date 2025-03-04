#include<stdio.h>

//交换函数
//Swap functions
void Swap(int* e1,int* e2);

//这是用来打印数组的函数
//This is the function used to print the array
void Print(int* arr,int size);

//向下调整算法
//Adjust the algorithm downwards
void AdjustDown(int* arr,int parent,int size);

//这是用来建立堆的函数
//This is the function used to build the heap
void BuildHeap(int* arr,int size);

//这个是用来排序的堆排序函数
//This is the heap sort function used for sorting
void HeapSort(int* arr,int size);