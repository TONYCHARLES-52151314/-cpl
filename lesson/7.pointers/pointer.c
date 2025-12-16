#include<stdio.h>
int main() {
    int radius=100;
    //printf("%d\n",radius);
    //printf("%p",&radius);

    radius=200;//radius此时是左值(内存空间)
    //
    double c=2*radius;//此时是右值（内存空间的值）
    int *p=&radius;//声明一个指针变量

    return 0;
}
//