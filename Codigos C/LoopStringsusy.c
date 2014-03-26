#include<stdio.h>
int main() {

    char vetorString [10];
    int i = 0

    printf("digite seu nome\n");
    scanf("%s", vetorString);

    while (i<10){

        printf("%c", vetorString[i]);
        i++

    }
}
