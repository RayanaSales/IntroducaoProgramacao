#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float r1, a1, v1;
  
  printf ("Calcularei o volume de um cilindro. Insira o valor do raio e da altura: \n");
  scanf ("%f%f", &r1, &a1);
  v1 = M_PI * r1 * r1 * a1;
  printf ("O volume do cilindro e: %.1f\n", v1);
  printf ("O volume de um cone, com o mesmo raio e altura do cilindro e: %.1lf\n", v1/3);
  
  system("PAUSE");	
  return 0;
}
