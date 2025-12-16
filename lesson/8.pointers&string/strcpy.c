//
// Created by ROG on 2025/11/18.
//
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

void strcpy1(char *dest, const char *src);
void strcpy2(char *dest, const char *src);
void strcpy3(char *dest, const char *src);
void strcpy4(char *dest, const char *src);
void strcpy5(char *dest, const char *src);
void strcpy6(char *dest, const char *src);

char *strcpystd(char *dest , const char *src);//思考：为什么要返回char型呢？strlen使用

int main() {
    const char *src = "Hello World";
    char *dest=malloc(strlen(src)+1);
    strcpy4(dest,src);
    strcpy5(dest,src);
}


void strcpy1(char *dest, const char *src) {
    int i=0;
    while( src[i]!='\0') {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}

void strcpy2(char *dest,const char *src) {
    int i=0;
    while ((dest[i]=src[i])!='\0') {
        i++;
    }
}

void strcpy3(char *dest,const char *src) {
    int i=0;
    while (*(dest+i) = *(src+i) !='\0');//剥开语法糖
}

void strcpy4(char *dest ,const char *src) {
    int i=0;
    while ((*dest = *src) !='\0')
    {
        dest++;
        src++;
    }
}
void strcpy5(char *dest,const char *src) {
    while ((*dest++ = *src++ ) !='\0' );//优先级：++(后缀优先) --（）【】。--> type(list)
    //*低于++
    //*dest =*src;
    //*dest != '\0';
    //src++;
    //dest++;
}

void strcpy6(char *dest,const char *src) {
    while (*dest++ = *src++ );//优先级：++(后缀优先) --（）【】。--> type(list)
    //*低于++
    //*dest =*src;
    //*dest != '\0';
    //src++;
    //dest++;
}

//思考max怎么放进去
char *strcpystd(char *dest , const char *src) {
    //要返回dest指针，所以引入了一个s指针
    for (char *s = dest;(*s++ =*src )!= '\0';);
    return dest;
}
// #include <string.h>
// #include <stdio.h>

// void StrCpy(char *dest, const char *src);
// void StrCpy1(char *dest, const char *src);
// void StrCpy2(char *dest, const char *src);
// void StrCpy3(char *dest, const char *src);
// void StrCpy4(char *dest, const char *src);
// void StrCpy5(char *dest, const char *src);
// char *StrCpyStd(char *dest, const char *src);

// int main() {
//   const char *src = "Hello World";
//   char dest[strlen(src) + 1];

//   StrCpy4(dest, src);
//   StrCpy5(dest, src);
//   printf("dest = %s\n", dest);
//   return 0;
// }

// void StrCpy(char *dest, const char *src) {
//   int i = 0;
//   while (src[i] != '\0') {
//     dest[i] = src[i];
//     i++;
//   }

//   dest[i] = '\0';
// }

// void StrCpy1(char *dest, const char *src) {
//   int i = 0;
//   while ((dest[i] = src[i]) != '\0') {
//     i++;
//   }
// }

// void StrCpy2(char *dest, const char *src) {
//   int i = 0;
//   // dest[i] : *(dest + i)
//   while ((*(dest + i) = *(src + i)) != '\0') {
//     i++;
//   }
// }

// void StrCpy3(char *dest, const char *src) {
//   while ((*dest = *src) != '\0') {
//     src++;
//     dest++;
//   }
// }

// void StrCpy4(char *dest, const char *src) {
//   // dest++: dest, dest = dest + 1
//   // dest[0]
//   // *dest++: *dest, not *(dest + 1)
//   while ((*dest++ = *src++) != '\0');
// }

// // NOT recommended!
// void StrCpy5(char *dest, const char *src) {
//   // '\0': null character, 0
//   while ((*dest++ = *src++));
// }

// char *StrCpyStd(char *dest, const char *src) {
//   for (char *s = dest; (*s++ = *src++) != '\0';);
//   return dest;
// }