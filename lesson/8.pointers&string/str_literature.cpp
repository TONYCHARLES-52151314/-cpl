//
// Created by ROG on 2025/11/18.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
    char msg[] ="hello world";
    //等价于一个一个赋值加上/0
    msg[0]='n';
    printf("%s\n",msg);

    //放在text区，放一些constants，放字符串
    //char *ptr_msg="goodbye world";
    //ptr_msg[0]='n';
    //printf("%s\n",ptr_msg);
}