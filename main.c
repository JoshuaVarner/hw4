#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "mylib.h"  
int main(int argc, char *argv[]) {
    // hw3 - add if check for argc == 1 -- print err to user
    if (argc == 1){
        printf("Error:No Input \n");
        return 0;
    }
    else{
    // else continue 
    int y = atoi(argv[1]);
    printf("Your Number: %d\n", y);
    printf("After foo add 8: %d\n",foo(y));
    printf("Factorial is: %d\n",fact(y));
    printf("%d\n",adda(y));
        return 0;
}
}
//--
    