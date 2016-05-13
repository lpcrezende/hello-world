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
    int N = atoi(argv[1]);
    printf("O fibonacci de %d eh %d.\n", N, fib(N));
    return 0;  
}

long fib(int N)
{
    if(N<2) return 1;
    else{
          return fib(N-1) + fib(N-2);
    }
}


