// mylib.c
#include "mylib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int foo(int x)
{
        return x + 8;
}

int adda(int x) {
int src = 5;
int dst = 0;
asm ("mov %1, %0\n\t"
    "add $1, %0"
    : "=r" (dst)
    : "r" (src));
printf("%d\n", dst);
           return 0;
}

int fact(void){
int res = 1;
int base = 6;
 for(int i=1;i<=base;i++) {
        res=res*i;
    }
    printf("%d\n",res);
    return 0;
}
