#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ float c1, c2, c1qua, c2qua, h;

printf ("Insira o valor do cateto 1 e do cateto 2: \n");
scanf ("%f%f", &c1, &c2);

c1qua = c1 * c1;
c2qua = c2 * c2;
h = c1qua + c2qua;
h = sqrtf(h); //expressão para tirar raiz quadrada de um float

printf ("O valor da hipotenusa e: %.2f \n", h);

 system("PAUSE");	
  return 0;
}
