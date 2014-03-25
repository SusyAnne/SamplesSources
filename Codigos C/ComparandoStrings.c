#include <stdio.h>
#include <string.h> //Biblioteca para comparar strings

int main()
{
    char ola[] = "ola";
    char ola2[] = "ola";

    if(ola == ola2)
        printf("Iguais\n");
    else
       printf("Nao sao iguais\n");

    if (strcmp(ola, ola2) == 0)
        printf("Iguais");
    else
        printf("Nao sao iguais");

    return 0;
}
