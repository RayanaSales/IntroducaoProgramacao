#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ang1, ang2, ang3, soma;
  
  printf ("insira o primeiro angulo: \n");
  scanf ("%d", &ang1);
  printf ("insira o segundo angulo: \n");
  scanf ("%d", &ang2);
  
  soma = ang1 + ang2;
  ang3 = 180 - soma ;
  
  printf ("indicarei um terceiro angulo, cuja a soma com o angulo 1 e 2, seja 180.\n");
  printf ("o valor do terceiro angulo e: %d\n", ang3); 
  
  
  
  system("PAUSE");	
  return 0;
}
