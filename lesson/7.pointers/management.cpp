//
// Created by ROG on 2025/11/18.
//
#include<stdio.h>
#include<stdlib.h>
int main() {
    int len=0;
    scanf("%d",&len);
    //int *numbers = malloc(len * sizeof(int));//动态申请一个空间，malloc接受字节数的参数，返回数组首地址
    //不想同步改？可以用sizeof
    int *numbers = malloc(len * sizeof ( *numbers));
                // 不用特别进行类型转换，c++要
    //malloc返回void型
    //现在被我转成了int型

    //判断有没有分配成功
    if (numbers == NULL) //此处是一个宏定义，0处受到操作系统保护
        {
        exit(1);
    }
    for (int i=0;i<len;i++) {
        scanf("%d",numbers+i);
        scanf("%d",&numbers[i]);
    }
    free (numbers);
    //stack:len,numbers   自动释放了
    //heap:malloc 分配出来的空间在堆区
    //numbers被释放了，malloc分配的空间却无人访问了，叫做内存泄漏
    return 0;
}