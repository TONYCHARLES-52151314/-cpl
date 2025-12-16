//
// Created by ROG on 2025/12/16.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *concat(const char *str1,const char *str2) {
    //申请堆区空间
    char *p=malloc(strlen(str1)+strlen(str2)+1);
    //拷贝str1,str2
    strcpy(p,str1);
    //覆盖\0
    strcat(p,str2);
    return p;
}
int main() {
    char str1[20]="helloaaa";
    char str2[20]="hellobbb";
    // strcat (str1,str2);
    char *cob=concat(str1,str2);
    char str3[20]="hello";
    char str4[20]={'h','e','l','l','o','\0','a','b','\0'};
    int res=memcmp(str3,str4,sizeof(str3));
    printf("%d\n",res);
    printf("str1=%s\nstr2=%s\n",str1,str2);
    printf("combination string = %s",cob);
    free(cob);
}
