//
// Created by ROG on 2025/12/16.
//
#include<stdio.h>
#include<string.h>
#define N 10

void PrintStrs(char **str,int len) {
    for (int i=0;i<len;i++)
    {
        printf("%s ",*str++);//printf的参数也是地址
    }

}
void Swap(char **a,char **b) {

    char *temp=*a;
    *a=*b;
    *b=temp;
}

void SelectSort(char **str,int len) {
    //每一轮都把最小的往前放
    for (int i=0;i<len-1;i++) {
        char min[20];
        int place=i;
        strcpy(min,str[i]);
        for (int j=i+1;j<len;j++) {
            //遍历数组，找到最小的字符串并且记录所在下标
            if (strcmp(min,str[j])>0) {
                strcpy(min,str[j]);
                place=j;
            }
            Swap(str+place,str+i);
        }
    }
}
int main() {
    char *names[N]={
        "ZZA",
        "CJ",
        "Durant",
        "Kobe",
        "ROG",
        "Michael",
        "Jordan",
        "why",
        "openai",
        "CSI"
    };
    PrintStrs(names,N);//传入数组名，就是传进来一个首地址，该首地址存储数据类型是char *,该首地址的类型就是char**
    SelectSort(names,N);
    printf("\n");
    PrintStrs(names,N);
}
