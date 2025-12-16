//
// Created by ROG on 2025/12/2.
//
#include<stdio.h>
#include<string.h>
#define N 5
void PrintStr(char ** str,int len) {
    // for (int i=0;i<len;i++) {
    //     printf("%s\n",str[i]);//str[i]=*(str+i)
    // }
    //double指针怎么用指针的方式遍历元素
    for (int *p=str;p<str+len;p++) {
        printf("%s\n",str++);
    }
}

void PrintStrs(char ** str,int len) {
    for (int i=0;i<len;i++) {
        printf("%s\n",*str++);//str[i]=*(str+i)
    }
}

void SelectSort(char ** str,int len) {
    for (int i=0;i<len-1;i++){
        //range[i,len-1]
        char *min=str[i];
        int min_index=i;
        for (int j=i+1;j<len;j++) {
            if (strcmp(min,str[j])) {
                min_index=j;
                min=str[j];
            }
        }
    }
}
int main() {
    char *names[5]={
        "ROG",
        "ZZA",
        "CHARLES",
        "TT",
        "ZHOU"
    };
    char *(* p)=names;
    /*
     * names<==>&names[0],而names[0]是char *【】类型(数组指针)，也就是*p指针指向char *类型的变量
     */
    PrintStr(p,N);
    printf("\n");
    PrintStrs(p,N);
}