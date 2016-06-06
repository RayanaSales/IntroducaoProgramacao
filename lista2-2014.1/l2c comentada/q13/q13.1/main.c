//sem estrutura e sem alocacao
#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y)
{
    int z;

    z = x + y;

    return z;
}

int subtracao(int x, int y)
{
    int z;

    z = x - y;

    return z;
}

int multiplicacao(int x, int y)
{
    int z;

    z = x * y;

    return z;
}

int divisao(int x, int y)
{
    int z;

    z = x / y;

    return z;
}

int main()
{
    int n, i;
    int x, y, z;
    char op;
    int elemento;

    scanf("%d ", &n);

    for (i=0 ; i<n ; i++)
    {

        scanf("%d ", &elemento);

        if (elemento>=0 || elemento <4)
        {
                scanf("%d %d", &x, &y);

                    if (elemento==0)
                    {
                        z = soma(x,y);
                        printf("%d + %d = %d",x,y,z);
                    }

                    else if (elemento==1)
                    {
                        z = subtracao(x,y);
                        printf("%d - %d = %d",x,y,z);
                    }

                    else if (elemento==2)
                    {
                        z = multiplicacao(x,y);
                        printf("%d * %d = %d",x,y,z);
                    }

                    else if (elemento==3)
                    {
                        z = divisao(x,y);
                        printf("%d / %d = %d",x,y,z);
                    }
        }

        else printf("digite valores validos");


    }

    return 0;
}
