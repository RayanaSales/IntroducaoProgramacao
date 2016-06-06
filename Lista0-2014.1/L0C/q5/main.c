#include <stdio.h>
#include <stdlib.h>

int main()
{ int a, b, soma, sub, multi;

printf ("Informe dois numero inteiros positivos:\n");
scanf ("%d%d", &a, &b);

soma = a + b;
printf ("A soma dos numeros e: %d\n", soma);

sub = a - b;
printf ("A subtracao dos numeoros e: %d\n", sub);

multi = a*b;
printf ("A multiplicacaoo doso numeros e: %d\n ", multi);

if (b == 0)
printf ("Impossivel dividir por 0\n");
else 
if (b != 0)
printf ("A divisao dos numeros e: %d\n", a/b);
 
 system("PAUSE");	
  return 0;
}
