#include<stdio.h>
int main () {

   int a, b, c;
   int d;
   int r;
   int s;

   printf("Digite o valor de A\n");
   scanf("%d", &a);

   printf( "Digite o valor de B\n");
   scanf("%d", &b);

   printf("Digite o valor de C\n");
   scanf("%d", &c);

   r = (a+b)^2;
   s = (b+c)^2;
   d = (r+s)/2;

   printf("o resultado de D= %d", d);



}
