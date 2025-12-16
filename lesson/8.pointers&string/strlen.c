//
// Created by ROG on 2025/11/18.
//
// #include<stdio.h>
// int strlen1(const char *s);
// int strlen2(const char *s);
// int strlen3(const char *s);
// //和长度大小有关不论函数类型还是参数类型都是size_t
// size_t strlenstd(const char *s);
// size_t strNLenGLic(const char *s, size_t max);
// int main() {
//     char msg[]="Hello World";
// }
// int strlen1(const char *s) {
//     int len=0;
//     while (s[len])  len++;
// }
// int strlen2(const char *s) {
//     int len=0;
//     while (s[len++]!=0);
// }
// int strlen2(const char *s) {
//     int len=0;
//     while (s[len++]!=0);
//     //s[len] !='\0';len++;
//     return len-1;
// }
// int strlen3(const char *s) {
//     int len=-1;
//     while (s[++len]!=0);
//     //len++;s[len]!='\0';
// }
// //标准库里这么算
// size_t strlenstd(const char *s) {
//     const char *sc;
//     for(sc = s; *sc!='\0'; sc++);
//
//     return sc-s;
// }
//
// size_t strNLenGLic(const char *s, size_t max) {
//     //不超过max的一个长度统计
//     size_t count=0;
//     while (max && *s) {//此处有两个判断
//         count ++ ;
//         s ++ ;
//         max -- ;
//     }
//     return count;
// }


#include <stdio.h>

int StrLen(const char *s);
size_t StrLenStd(const char *s);

int main(){
    char msg[20] = "Hello World!";
    printf("%s\n", msg);

    msg[0] = 'N';
    printf("%s\n", msg);

    // string literal;
    // may be stored in read-only memory
    // undefined behavior
    // char *ptr_msg = "Hello World!";
    // ptr_msg[0] = 'N';
    // interrupted by signal 11: SIGSEGV
    // SIG: signal; SEGV: segmentation violation
    // printf("%s\n", msg);

    printf("StrLen(%s) = %d\n", msg, StrLen(msg));

    return 0;
}

int StrLen(const char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    return len;
}

size_t StrLenStd(const char *s) {
    const char *sc;
    for (sc = s; *sc != '\0'; sc++);

    return (sc - s);
}