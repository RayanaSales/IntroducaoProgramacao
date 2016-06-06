#include <stdio.h>
#include <stdlib.h>

int main()
{ int n1, n2, n3, n4, n5, soma, ma;

printf ("Informe 5 numeoros inteiros: \n");
scanf ("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
  
soma = n1 + n2 + n3 + n4 + n5;
ma = soma/5;

printf ("A media aritmetrica dos numeros e: %d\n", ma);
  system("PAUSE");	
  return 0;
}
