//
// Created by ROG on 2025/11/30.
//
#include<stdio.h>
unsigned int strlen(const char *s) {
    unsigned int count = 0;
    while (*s++){
        count++;
    }
    return count;
}
int main() {
    int x=strlen("hello world");
    printf("%d\n",x);
}