//
// Created by ROG on 2025/11/19.
//
#include<stdio.h>
int strcmp(const char *s1, const char *s2) {
    //const的含义是不能通过指针去修改字符
    //返回值：相等0 ，大正数，小负数
    while (*s1 == *s2 && (*s1!='\0' && *s2!='\0')) {
        s1++;
        s2++;
    }
    // // if (*s1 == *s2) return 0;
    // if (*s2 == '\0') return -1;
    // else return 1;
    return *(const unsigned char *)s1-*(const unsigned char *)s2;
    //return *s1 > *s2 ? 1 :-1 ;
}
int StrCmpStd(const char *s1, const char *s2)//用const代表不可以修改的字符串
{
    for (;*s1 == *s2; ++s1, ++s2);
    if (*s1 == '\0') {
        return 0;
    }
    return *(const unsigned char *)s1 -*(const unsigned char *)s2;
}
int strncmp(const char *s1, const char *s2, size_t n) {

}
int main() {
    char str1[20]="hello";
    char str2[20]="hello";

    int res=strcmp(str1, str2);
    if (res == 0) {
        printf("%s is equal to %s\n",str1, str2);
    }
    else if (res > 0) {
        printf("%s is greater than %s\n",str1, str2);
    }
    else {
        printf("%s is less than %s\n",str1, str2);
    }
    return 0;
}

//strlen