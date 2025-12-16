//
// Created by ROG on 2025/11/29.
//
#include<stdio.h>
#include<stdlib.h>
int main() {
    void *p=NULL;
    int cnt=0;
    while ((p=malloc(1024*1024*1024))) {
        cnt++;
    }
    printf("the maximum space of heap designed for the program is %dGB\n",cnt);
    return 0;
}
