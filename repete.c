/*
 * Programa : repete.c
 * Autor: lpcrezende
 * Data da criação: 15.04.2016 13:56h BRT
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    char *c;
    int n, i;
    
    if(argc == 1){
        printf("Uso %s N C, onde N é a quantidade e C é o caracter\n", argv[0]);
        return 0;
    }
    
    c = argv[2];
    n = atoi(argv[1]);
    
    for(i=0; i<n; ++i){
        printf("%s", c);
    }
    printf('\n');
    
    system("PAUSE");
    return 0;
    
}
