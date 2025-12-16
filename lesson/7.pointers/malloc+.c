#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int arraysize;
    scanf("%d",&arraysize);
    a=(int *)malloc(sizeof(int)*arraysize);//(int *) 将返回的 void 指针强制转换为整型指针类型
    double *b=(int *)malloc(sizeof(b)*arraysize);
    if(b==NULL)    printf("allocation succeeded!");   
    return 0;
}