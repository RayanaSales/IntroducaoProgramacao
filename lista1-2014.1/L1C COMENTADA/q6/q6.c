//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ int n, tn, i=1, restos=0;

freopen("e6.txt" , "r", stdin);
freopen("s6.txt", "w", stdout);


                  while (n!=0)
                  {
                   scanf ("%d", &n);
                   
                         if (n==0)
                         return 0;
                         
                   tn = (n* (n+1)) / 2;

                      for (i=1;i<tn;i++) /*divide tn por todos os numeros maiores que 1 e menores q ele mesmo*/
                      {
                                         if (tn%i==0) /* verifica se essas divis�es possuem resto 0*/
                                            restos = restos+i; /*se sim, ele pega o numero q foi dividido e vai somando*/
                      }
                                         if (tn!=restos) /*com a variavel restos sendo igual a soma dos divisores,ele verifica se tn � igual ao restos(soma dos restos)*/
                                            printf ("T%d=%d imperfeito\n",n,tn);/*pela defini��o,se a soma dos restos de um numero for diferente do proprio numero, ele � imperfeito*/
                                                   else
                                            printf ("T%d=%d perfeito\n",n,tn);/*se a soma dos restos forem iguais ao numero verificado, ele � perfeito*/
                      restos = 0; /*final da primeira verifica��o. Se n�o tiver isso, ela verifica de novo com o valor anterior armazenado, 
              e no final da segunda verifica��o teria a soma de dois valores. */
                   } 
fclose(stdin);
fclose(stdout);
  return 0;
}

