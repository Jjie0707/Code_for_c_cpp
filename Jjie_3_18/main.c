#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
        p->next=S->top;
        S->top=p;
    }
}
ElemType Pop(Stack* S){
    if(S->top==S->bottom){
        Node* p=(Node*)malloc(sizeof(Node));
        p=S->top;
        ElemType e=p->val;
        S->top=NULL;
        S->bottom=NULL;
        free(p);
        return e;
    }else{
        Node* p=(Node*)malloc(sizeof(Node));
        p=S->top;
        S->top=p->next;
        ElemType e=p->val;
        free(p);
        return e;
    }
}
int isEmpty(Stack* S){
    if(S->top==NULL){
        return 1;
    }else{
        return 0;
    }
}
int minSwaps(char* s) {
    int n=strlen(s);
    int count=0;
    if(!strcmp(s,"")){
        return count;
    }else{
        Stack* S=(Stack*)malloc(sizeof(Stack));
        S->top=NULL;
        S->bottom=NULL;
        //将字符串的一半压入栈

        for(int i=0;i<(n/2);i++){
            Push(S,s[i]);
        }
        for(int j=(n/2);j<n;j++){
            char c=Pop(S);
            if(!(c=='[' && s[j]==']')){
                count++;
            }
        }
        return count;
    }
}
int main1() {
    char str[] ="][][";
    printf("%d ",minSwaps(str));
    return 0;
}

int main() {
    return 0;
}