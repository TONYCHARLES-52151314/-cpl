//
// Created by ROG on 2025/11/28.
//
#include<stdio.h>
#include<stdlib.h>
int main() {
    int len;
    scanf("%d",&len);
    int *p=malloc(len*sizeof(int));
    for(int i=0;i<len;i++){scanf("%d",p+i);
    }
    free(p);
    return 0;
}
//*p++
//*(p+i)