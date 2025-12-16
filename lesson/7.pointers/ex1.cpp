//
// Created by ROG on 2025/11/28.
//
#include<stdio.h>
int  main() {
    int a[5]={1,2,3,4,5};
    int *p=(int *)(&a +1);
    printf("%d %d\n",*(a+1),*(p-1));
    printf("%p\n",a);
    printf("%p\n",&a);
    printf("%p\n",a+1); //相当于int *p=a[0];   p++跳到后面的一个int
    printf("%p\n",&a+1);//相当于int (*q)[5];   q++跳到5个后面
    return 0;
}