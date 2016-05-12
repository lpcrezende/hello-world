/*
 * fib.c calcula o fibonacci de N
 * autor: lpcrezende
 *
 */
 
#include <stdio.h>

long fib(int);

int main(argc, argv)
        int argc;
        char *argv[];
{
    printf("O fibonacci de %d eh %d.\n", argv[1], fib(argv[1]));
    return 0;  
}

long fib(int N)
{
    if(N<2) return 1;
    else{
          return fib(N-1) + fib(N-2);
        }
}


