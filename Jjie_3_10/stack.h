//
// Created by Jjie on 25-3-10.
//

#ifndef STACK_H
#define STACK_H
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int ElemType;
typedef struct StackNode{
    ElemType val;
    struct StackNode* next;
}Node;

typedef struct Stack{
    Node* top;
    Node* bottom;
}Stack;

void Push(Stack* S,ElemType e){
    if(S->top==NULL) {
        //如果栈顶元素为空说明 栈是空的
        Node* p=(Node*)malloc(sizeof(Node));
        p->val=e;
        p->next=NULL;
        S->top=p;
        S->bottom=p;
    }
    else{//此时栈为空
        Node* p=(Node*)malloc(sizeof(Node));
        p->val=e;
        p->next=S->top;
        S->top=p;
    }
}

ElemType Pop(Stack* S){
    assert(S->top);
    ElemType e;
    if (S->top==S->bottom && S->top) {
        Node* p=S->top;
        S->top=NULL;
        S->bottom=NULL;
        e=p->val;
        free(p);
    }else {
        Node* p=S->top;
        e=p->val;
        S->top=p->next;
        free(p);
    }
    return e;
}
int Empty(Stack* S) {
    if (S->top==S->bottom) {
        return 1;
    }else {
        return 0;
    }
}

#endif //STACK_H
