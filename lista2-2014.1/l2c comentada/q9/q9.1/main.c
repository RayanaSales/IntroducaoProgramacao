#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ehPrimo(unsigned int a, bool *resultado)
{
    int i, cont=0;
    unsigned int x;

    for (i=1 ; i<=x ; i++)
        {
            a = x % i;

                    if (a==0)
                        cont += 1;

                    else if (a!=0)
                        continue;
        }

        if (cont == 2) //se for primo, chame a funcao fatorial
            fatorial(a, &a);


        else if (cont == 0)
            printf("nao eh primo");
}

void fatorial(unsigned int a, bool *resultado)
{
       double i=1, n=1;

       for (i=2 ; i<=a ; i++)
           n = i * n;

    printf("%.2lf", n);
}


int main()
{
    unsigned int n, x, *resultado, a;

    resultado = &a;

    scanf("%u %u", &n, &x);

    ehPrimo(x, &a);







        return 0;
}
