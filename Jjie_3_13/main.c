#include <stdio.h>
int trans(char s) {
    switch (s) {
        case 'a':
            return 0;
        case 'e':
            return 1;
        case 'i':
            return 2;
        case 'o':
            return 3;
        case 'u':
            return 4;
        default:
            return -1;
    }
}
#include <string.h>
// 至少 出现k个辅音 每个元音至少出现一次
// 差分(k-(k+1))得到恰好出现k个
long long _countOfSubstrings(char* word, int k) {
    long long count = 0;
    int arr[5] = {0};//   每种元音出现的次数
    int kinds = 0;//   出现的元音的种类
    int consonant = 0;//  辅音出现的次数

    int length = strlen(word);

    int left = 0, right = 5 + k - 1;

    for (int i = 0; i <= right; i++) {
        if (trans(word[i]) >= 0) {
            if (arr[trans(word[i])] == 0) {
                kinds += 1;
            }
            arr[trans(word[i])] += 1;
        } else {
            consonant += 1;
        } //直接检查第一个窗口是否满足
    }
    while (right < length) {
        // 不满足扩大右窗口

            if (trans(word[right]) >= 0) {
                if (arr[trans(word[right])] == 0) {
                    kinds += 1;
                }
                arr[trans(word[right])] += 1;
            } else {
                consonant += 1;
                right++;

        // 满足收缩左窗口
        while (kinds >= 5 && consonant >= k) {
            count += length -right+1;
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
int main(void) {
    char word[]="ieaouqqieaouqq";
    // printf("%d ",judge('a'));
    // printf("%d ",judge('b'));
    printf("%d ",_countOfSubstrings(word,1));
    printf("%d ",_countOfSubstrings(word,2));
    // printf("Hello, World!\n");
    return 0;
}
