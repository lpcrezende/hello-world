/*
 * Programa : repete.c
 * Autor: lpcrezende
 * Data da criaÃ§Ã£o: 15.04.2016 13:56h BRT
 * Edição via git desktop 10.05.16 lpcrezende
 * Edição vi git 10.05.16 13:57h BRT
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    char *c;
    int n, i;
    
    if(argc == 1){
        printf("Uso %s N C, onde N eh a quantidade e C eh o caracter\n", argv[0]);
        return 0;
    }
    
    c = argv[2];
    n = atoi(argv[1]);
    
    for(i=0; i<n; ++i){
        printf("%s", c);
    }
    printf("\n");
    
    system("PAUSE");
    return 0;
    
}
