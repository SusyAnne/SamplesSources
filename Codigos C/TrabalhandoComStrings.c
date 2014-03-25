#include<stdio.h>
int main (){
    char ola2[] = "Previamente";
    printf("Imprimindo vetor previamente iniciado: %s \n", ola2);

    char ola[4]; //Vetor ola [0] [1] [2] [3]
    ola[0] = 'o';
    ola[1] = 'l';
    ola[2] = 'a';
    ola[3] = 'g';
    printf(ola);
    printf("\n");
    printf("Imprimindo caracteres individualmente: %c %c %c %c \n", ola[0], ola[1], ola[2], ola[3]);

    printf("Informe uma letra: \n");
    scanf("%c", &ola[0]);
    printf("Caractere capturado %c \n", ola[0]);

    printf("Informe uma palavra: \n");
    scanf("%s", ola);
    printf("Palavra capturada %s \n", ola);

}


