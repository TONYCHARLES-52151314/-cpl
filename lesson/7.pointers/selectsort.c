//
// Created by ROG on 2025/11/28.
//
//依旧传参练习
#include<stdio.h>
void Swap(int *a,int *b) {
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
//借助指针赋值
void SelectSort(int *p,int len)//point to a[0]
{
    for (int i=0;i<len-1;i++) {
        int *p_max=p;
        //range[0,len-i-1]
        for (int *ptr=p;ptr<p+len-i;ptr++) {
            //compare *p_max and *ptr
            if (*p_max<*ptr) {
                p_max=ptr;
            }
        }
        Swap(p_max,p+len-i-1);
    }
}
void Display(const int *p ,int len) {
    for (int i=0;i<len;i++)
        printf("%d ",*(p+i));
    printf("\n");
}
int main() {
    int a[10]={5,4,3,2,1,6,7,8,9,10};
    int len=sizeof(a)/sizeof(a[0]);
    Display(a,len);
    SelectSort(a,len);
    Display(a,len);
    return 0;
}
//可视化的网站https://pythontutor.com/visualize.html#mode=edit