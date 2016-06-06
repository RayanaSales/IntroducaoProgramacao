//sem bool e com if
#include <stdio.h>
#include <stdlib.h>

void soma(int x, int y)
{
    int z;

    z = x + y;
}

void subtracao(int x, int y)
{
    int z;

    z = x - y;
}

void multiplicacao(int x, int y)
{
    int z;

    z = x * y;
}

void divisao(int x, int y)
{
    int z;

    z = x / y;
}

struct aritmeticaStr
{
    int x, y, z;
    char op;
};

typedef struct aritmeticaStr aritmetica;

int main()
{
    int n, i;
    int elemento;

    aritmetica pegando, vetor[4], *ponteiro = (aritmetica*) malloc( 4 * sizeof(aritmetica));

    if (ponteiro != NULL)
    {

    scanf("%d ", &n);

    for (i=0 ; i<n ; i++)
    {
        scanf("%d ", &elemento);

        if (elemento>=0 && elemento <4)
        {
                scanf("%d %d", &pegando.x, &pegando.y);

                    if (elemento==0)
                    {
                            for (i=0 ; i<5 ; i++)
                            {
                                if (i=0)
                                    *ponteiro+i = &pegando.x;

                                else if (i==1)
                                    *ponteiro+i = &pegando.y;

                                else if (i==2)
                                    ponteiro+i = &pegando.z;

                                else if (i==3)
                                    *ponteiro+i = +;
                            }

                            soma(pegando.x,pegando.y);

                            for (i=0 ; i<5 ; i++)
                            {
                                if (i=0)
                                    printf("%d", *ponteiro+i);

                                else if (i==3)
                                    printf(" %c ", *ponteiro+i);

                                else if (i==1)
                                    printf("%d = ", *ponteiro+i);

                                else if (i==2)
                                    printf("%d", *ponteiro+i);
                            }
                    }

                    else if (elemento==1)
                    {
                        for (i=0 ; i<5 ; i++)
                        {
                                if (i=0)
                                    *ponteiro+i = &pegando.x;

                                else if (i==1)
                                    *ponteiro+i = &pegando.y;

                                else if (i==2)
                                    ponteiro+i = &pegando.z;

                                else if (i==3)
                                    *ponteiro+i = -;
                        }

                        subtracao(pegando.x,pegando.y);

                       for (i=0 ; i<5 ; i++)
                        {
                                if (i=0)
                                    printf("%d", *ponteiro+i);

                                else if (i==3)
                                    printf(" %c ", *ponteiro+i);

                                else if (i==1)
                                    printf("%d = ", *ponteiro+i);

                                else if (i==2)
                                    printf("%d", *ponteiro+i);
                        }
                    }

                    else if (elemento==2)
                    {
                        for (i=0 ; i<5 ; i++)
                        {
                                if (i=0)
                                    *ponteiro+i = &pegando.x;

                                else if (i==1)
                                    *ponteiro+i = &pegando.y;

                                else if (i==2)
                                    ponteiro+i = &pegando.z;

                                else if (i==3)
                                    *ponteiro+i = +;
                        }

                        multiplicacao(pegando.x,pegando.y);

                        for (i=0 ; i<5 ; i++)
                        {
                                if (i=0)
                                    printf("%d", *ponteiro+i);

                                else if (i==3)
                                    printf(" %c ", *ponteiro+i);

                                else if (i==1)
                                    printf("%d = ", *ponteiro+i);

                                else if (i==2)
                                    printf("%d", *ponteiro+i);
                        }
                    }

                    else if (elemento==3)
                    {
                        for (i=0 ; i<5 ; i++)
                        {
                                if (i=0)
                                    *ponteiro+i = &pegando.x;

                                else if (i==1)
                                    *ponteiro+i = &pegando.y;

                                else if (i==2)
                                    ponteiro+i = &pegando.z;

                                else if (i==3)
                                    *ponteiro+i = +;
                        }

                        divisao(pegando.x,pegando.y);

                        for (i=0 ; i<5 ; i++)
                        {
                                if (i=0)
                                    printf("%d", *ponteiro+i);

                                else if (i==3)
                                    printf(" %c ", *ponteiro+i);

                                else if (i==1)
                                    printf("%d = ", *ponteiro+i);

                                else if (i==2)
                                    printf("%d", *ponteiro+i);
                        }
                    }
        }

        else printf("digite valores validos");
            continue;

    free(ponteiro);
    }

    }
    else
        printf("Memória insuficiente\n");

    return 0;
}
