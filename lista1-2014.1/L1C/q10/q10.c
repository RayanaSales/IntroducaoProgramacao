//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned int n, i=1 , j=1, soma, contador = 0;
  double quadrado;

  freopen("e10.txt", "r", stdin);
  freopen("s10.txt", "w", stdout);

  while(n > 0)
  {
    scanf("%u", &n);

    for (j=1 ; j<n ; j++)
    {
             quadrado = pow(j,2);

                      if(quadrado == n)
                      {
                                  contador = 1;

                                  printf("%u=1",n);
                                  soma = 1;
                                  for (i=3; i < n; i += 2)
                                  {
                                            if(soma != n)
                                            {
                                                    soma += i;
                                                    printf("+%u", i);
                                            }
                                  }
                                  printf("\n");
                       }

    }
                        if(contador == 0 && n > 0)
                                  printf("imperfeito\n");
                                  contador = 0;
  }

fclose(stdin);
fclose(stdout);

  return 0;
}
