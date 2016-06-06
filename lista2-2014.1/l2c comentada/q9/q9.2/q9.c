//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ehPrimo(unsigned int a, bool *resultado)
{
    int i, cont=0;
    unsigned int resto;

    *resultado = true;

    if (a==0)
       *resultado = false;

    else if (a==1)
          *resultado = false;

    else if (a==2)
          *resultado = true;


    for (i=2 ; i<a ; i++)
        {
            resto = a % i;

                    if (resto==0)
                       *resultado = false;

                    else
                        continue;
        }

}

void fatorial(unsigned int a, double *resultado)
{
       double i=1, n=1;

       for (i=2 ; i<=a ; i++)
           n = i * n;

           *resultado = n;
}


int main()
{
    unsigned int n=1, x=1;
    bool a;
    double result=0, soma=0;
    int i, contador=0;

    freopen("e9.txt", "r", stdin);
    freopen("s9.txt", "w", stdout);

    while ( n != 0 || x != 0)
    {

         scanf("%u %u", &n, &x);

         if (n==0 && x==0)
            break;

         for (i=x ;  ; i++)
         {
             ehPrimo(i, &a);

                  if ( a == true )
                  {
                     fatorial(i, &result);
                     soma += result;
                     contador += 1;
                  }

                  else if (contador == n) // verifico se ja achei a qtd de numeros que preciso achar. ex: 2 e 4,se o meu contador=2,eu ja achei os proximos 2 primos depois de 4, ai paro.
                                 break;

                  else continue;
         }

       printf("%.0lf\n", soma);

       contador=0;
       result = 0;
       soma = 0;
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}
