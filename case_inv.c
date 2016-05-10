/*
 *Programa: case_inv.c
 *Inverte a caixa dos caracteres de uma string
 *autor: lpcrezende
 */

#include <stdio.h>
int main(argc, argv)
	int argc;
	char *argv[];
{
    if(argc != 2){
        printf("Uso: %s ccccccc onde cccccc eh a string de entrada.\n", argv[0]);
    }
    char *str = argv[1];
}
