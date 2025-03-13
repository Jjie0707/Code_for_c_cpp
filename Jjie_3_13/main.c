#include<stdio.h>
int trans(char s) {
    switch (s) {
        case 'a':return 0;
        case 'e':return 1;
        case 'i':return 2;
        case 'o':return 3;
        case 'u':return 4;
        default:return -1;
    }
}
#include <string.h>
long long _countOfSubstrings(char* word, int k) {
    long long count = 0;
    int arr[5] = {0};  //   每种元音出现的次数
    int kinds = 0;     //   出现的元音的种类
    int consonant = 0; //  辅音出现的次数
    int length = strlen(word);
    int left = 0, right = 0;
    while (right < length) {
        if (trans(word[right]) >= 0) {
            if (arr[trans(word[right])] == 0) {
                kinds += 1;
            }
            arr[trans(word[right])] += 1;
        } else {
            consonant += 1;
        }
        right++;
        //收缩左边界
        while(kinds>=5 && consonant>=k){
            //当前右边界++了所以要再+1
            count+=length-right+1;
            if (trans(word[left]) >= 0) {
                if (arr[trans(word[left])] == 1) {
                    kinds -= 1;
                }
                arr[trans(word[left])] -= 1;
            } else {
                consonant -= 1;
            }
            left++;
        }
    }
    return count;
}
long long countOfSubstrings(char* word, int k) {
    return _countOfSubstrings(word, k) - _countOfSubstrings(word, k + 1);
}
int main() {
    char word[]="aeioup";
    printf("%d ",countOfSubstrings(word,0));
    printf("%d ",countOfSubstrings(word,1));
    return 0;
}