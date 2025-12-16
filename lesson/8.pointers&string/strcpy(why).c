//
// Created by ROG on 2025/11/30.
//
#include<stdio.h>
#include<stdlib.h>
int StrLen(const char *s) {
    int count=0;
    while (s[count]!='\0')
        count++;
    return count;
}
// void StrCpy(char *dest,char *src) {
//     while (*src!='\0') {
//         *(dest++)=*(src++);
//     }
//     *dest++='\0';
// }
void StrCpy(char *dest,char *src) {
    int i=0;
    while (*dest[i]!=*src[i]!='\0')
    *dest++='\0';
}
int main() {
    char str[]="hello world";
    char *p=malloc(StrLen(str)+1);
    StrCpy(p,str);
    while (*p!='\0')
        printf("%c",*p++);
    return 0;
}
