#include<stdio.h>
int main () {

   int a,x;
   float fibo = 0, i = 1, j=0;

   printf("Digite um numero");
   scanf("%d",&a);

   printf("Sequencia Fibonacci\n");

   printf("Fibo: %d = %.2f\n", 1, i);
   for(x = 2; x<=a; x++){
        fibo = j + i;
        printf("Fibo: %d = %.2f\n", x, fibo);
        j = i;
        i = fibo;
   }
}

//1 1 2 3 5 8 13  #1 1 2 3

//fibo = 5
//j = 3
//i = 5
//a = 97
