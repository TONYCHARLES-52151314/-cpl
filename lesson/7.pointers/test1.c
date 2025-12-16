//
// Created by ROG on 2025/11/30.
//
#include<stdio.h>
#include<string.h>
int main() {
    char str[]="hello";
    char *p="hello";
    str[0]='M';
    // p[0]='M';
    printf("str:%p\n",str);
    printf("p:  %p\n",p);//p所指内容在只读数据区
    printf("&p: %p\n",&p);
    printf("%s\n",str);
}