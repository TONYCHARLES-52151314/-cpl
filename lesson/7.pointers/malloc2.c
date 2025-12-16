//
// Created by ROG on 2025/11/29.
//
#include<stdio.h>
#include<stdlib.h>
int main() {
    int len;
    int *p=malloc(100);
    p++;
    free(p);
    return 0;
}