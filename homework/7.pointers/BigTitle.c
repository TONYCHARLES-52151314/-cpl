#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
    char *s = (char *)malloc(4097*sizeof(char));
    fgets(s, 4097, stdin);
    int i = 0;
    int new_word = 1; // 标记是否为新单词开始

    while (*(s+i) != '\0' && *(s+i) != '\n') {
        // 如果该位置是空格，输出空格，下一个字符是新单词开始
        if (*(s+i) == ' ') {
            putchar(' ');
            new_word = 1;
        } else {
            // 如果是新单词开始，转换为大写
            if (new_word) {
                putchar(toupper(*(s+i)));
                new_word = 0;
            } else {
                // 否则转换为小写
                putchar(tolower(*(s+i)));
            }
        }
        i++;
    }

    free(s);
    return 0;
}