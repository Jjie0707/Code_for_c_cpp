#include<stdio.h>
#include<stdlib.h>

typedef char ElemType;

typedef struct StackNode{
    ElemType val;
    struct StackNode* next;
}Node;

typedef struct Stack{
    Node* top;
    Node* bottom;
}Stack;

void Push(Stack* S,ElemType e){
    if(S->bottom==NULL){
        Node* p=(Node*)malloc(sizeof(Node));
        p->val=e;
        p->next=NULL;
        S->top=p;
        S->bottom=p;
    }
    else{
        Node* p=(Node*)malloc(sizeof(Node));
        p->val=e;
        p->next=NULL;
        S->top->next=p;
        S->top=p;
    }
}

ElemType Pop(Stack* S){
    
}