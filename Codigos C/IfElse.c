#include<stdio.h>
int main (){
    int a,b, opc;

    printf("1 - Soma: \n2 - Subtracao");
    scanf("%d", &opc);

    if (opc == 1){
        printf("Informe dois numeros: \n");
        scanf("%d %d", &a, &b);
        printf("O resultado da soma foi: %d", a + b);
    }
    else
    if (opc == 2){
        printf("Informe dois numeros: \n");
        scanf("%d %d", &a, &b);
        printf("O resultado da subtracao foi: %d", a - b);
    }
}

