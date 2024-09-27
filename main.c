#include <stdio.h>

int main(void)
{
   int numero;
   printf("inserisci un numero: ");
   scanf("%d",&numero);
   if ( numero %2 == 0)
   {
      printf("il numero e' pari");
   }
   else
   {
      printf ("il numero e' dispari");
   }
   return 0;
}
