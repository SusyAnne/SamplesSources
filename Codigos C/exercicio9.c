#include<stdio.h>
int main () {

   int a, b, c;
   int media;

   printf("digite as notas do aluno:\n");
   scanf(" %d %d %d", &a, &b, &c);

   media = (a+b+c)/3;
   printf("a Media do aluno e: %d\n", media);

   if (media > 6) {
       printf("Aprovado");
   }
   else
   if (media <6) {
       printf("Reprovado");
   }


}
