#include<stdio.h>
int main () {
   char vetor[10];
   int  i = 0;


    printf("Digite seu nome:\n");
    scanf("%s", vetor);

    while(i<10){
        printf("%c\n", vetor[i]);
        i ++;
    }

    printf("%s", vetor);

}
