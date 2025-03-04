#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int ElemType;

typedef struct QueueNode{
    ElemType val;
    struct QueueNode* next;
}Node;

typedef struct Queue{
    Node* head;
    Node* tail;
}Queue;

//入队列
void Push(Queue* Q,ElemType e){
    assert(Q);
    if(Q->head==NULL){//证明这个队列为空
        Node* p=(Node*)malloc(sizeof(Node));
        p->next=NULL;
        p->val=e;
        Q->head=p;
        Q->tail=p;
    }else{//该队列不为空
        Node* p=(Node*)malloc(sizeof(Node));
        p->next=NULL;
        p->val=e;
        Q->tail->next=p;
        Q->tail=p;
    }
}

//队头出队列，并返回其值
ElemType Pop(Queue* Q){
    assert(Q);
    if(Q->head==Q->tail){
        Node* p=Q->head;
        Q->head=NULL;
        Q->tail=NULL;
        ElemType e= p->val;
        free(p);
        return e;
    }
    else{
        Node* p=Q->head;
        Q->head=p->next;
        ElemType e=p->val;
        free(p);
        return e;
    }
}

//判断队列是否为空，空返回true
bool QueueEmpty(Queue* Q){
    assert(Q);
    if(Q->head==NULL){
        return true;
    }
    else{
        return false;
    }
}

//队头不出队列，但可获得队头的值
ElemType GetHead(Queue* Q){
    assert(Q);
    return Q->head->val;
}

//获得队列的长度 (可根据长度判断是否为空，此处不做修改)
int Length(Queue* Q){
    assert(Q);
    if(Q->head==NULL){
        return 0;
    }
    else{
        int count=0;
        Node* p=Q->head;
        while(p){
            count++;
            p=p->next;
        }
        return count;
    }
}
int main()
{
    Queue *Q=(Queue*)malloc(sizeof(Queue));
    Push(Q,'a');
    Push(Q,'b');
    Push(Q,'c');
    Push(Q,'d');
    Push(Q,'e');

    printf("%d\n",Length(Q));

    while(!QueueEmpty(Q)){
        printf("%c ",Pop(Q));
    }
    printf("\n");

    printf("%d\n",Length(Q));

    return 0;
}