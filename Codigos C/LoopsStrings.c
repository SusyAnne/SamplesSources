#include<stdio.h>
int main(){
    char vetorStrings[10];
    int i = 0;

    printf("Digite seu nome: \n");
    scanf("%s", vetorStrings);

    printf("%s", vetorStrings);
    while(i<10)
    {
        printf("%c \n", vetorStrings[i]);
        i ++;
    }
}
