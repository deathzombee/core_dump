//main.c
// gcc main.c foo.c -o enter1 -g -O0 -Wall -std=c11

#include <stdio.h>
#include <stdlib.h>
#include "foo.h"

int main(int argc, char *argv[]) {
    // hw3 - add if check for argc == 1 -- print err to user
    // else continue 
    int y = atoi(argv[1]);
    printf("Your Number: %d\n", y);
    printf("After foo add 8: %d\n",foo(y));
    return 0;
}
//--