//
// Created by ROG on 2025/11/20.
//
// #include<stdio.h>
// int main() {
//     unsigned int x;
//     scanf("%o\n",&x);
//     printf("%d\n",x);
//     printf("%u\n",x);
//     printf("%lf\n",*(float *)&x);
//     printf("%e\n",*(float *)&x);
// }

#include <stdio.h>

int main() {
    unsigned int x;
    scanf("%x", &x);
    printf("%d\n%u\n%.6f\n%.3e\n", (int)x, x, *(float*)&x, *(float*)&x);
    return 0;
}

