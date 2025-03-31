// #include <stdio.h>
//
// int main(void) {
//     printf("Hello, World!\n");
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main(){
    // 请在此输入您的代码
    char ch[1000];
    scanf("%s",ch);
    int length=strlen(ch);
    int max=0;
    int count=0;
    for(int i=0;i<length;i++){
        if(ch[i]=='a'){
            count++;
        }else{
            if(count>=max){
                max=count;
            }
            count=0;
        }
    }
    char arr[max+2];
    for(int i=0;i<max+1;i++){
        arr[i]='a';
    }
    printf("%s",arr);
    return 0;
}