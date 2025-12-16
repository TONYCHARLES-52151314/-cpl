//
// Created by ROG on 2025/12/16.
//
#include<stdio.h>
#include<string.h>
#define N 10
void Print(char **str,int len) {
    for (int i=0;i<len;i++)
        printf("%s ",str[i]);
}

void Swap(char **a,char **b) {
    char *temp=*a;
    *a=*b;
    *b=temp;
}

void SelectSort(char **str,int len) {
    for (int i=0;i<len-1;i++) {
        int max_index=i;
        char *max=str[i];
        for (int j=i;j<len-i;j++) {
            if (strcmp(max,str[j])<0)
                max_index=j;
                max=str[j];
        }
        Swap(str+max_index,str+i);
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
    Print(names,N);
    SelectSort(names,N);
    printf("\n");
    Print(names,N);
}
