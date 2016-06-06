//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[6][6], rota[6], i, j, contadorNomeMatriz=0, contadorNomeRota=0, a, b, soma = 0, contadorbarraN = 0;
    char nomeDaMatriz[20], letraMatriz = 'a', nomeDaRota[20], letraRota = 'a';

    freopen("e4.txt", "r", stdin);
    freopen("s4.txt", "w", stdout);

    while (letraMatriz != '\n' && letraMatriz != ' ')
    {
        scanf("%c", &letraMatriz);

        if (letraMatriz == ' ' || letraMatriz == '\n')
            break;

        nomeDaMatriz[contadorNomeMatriz] = letraMatriz;
        contadorNomeMatriz += 1;
    }

    for (i=0 ; i<6 ; i++)
    {
        for (j=0 ; j<6 ; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    while (contadorbarraN < 2)
    {
        scanf("%c", &letraRota);

        if(letraRota != '\n')
        {
            if(letraRota != ' ')
            {
                nomeDaRota[contadorNomeRota] = letraRota;
                contadorNomeRota += 1;
            }
        }
        else
            contadorbarraN++;
    }

    for (i=0 ; i<6 ; i++)
    {
        scanf("%d ", &rota[i]);
    }

    for (a=0 ; a<6 ; a++)
    {
        if (a == rota[0])
        {
            for (b=0 ; b<6 ; b++)
            {
                if (b == rota[1])
                {
                    soma += matriz[a][b];
                }
                else continue;
            }
        }
        else continue;
    }

    for (a=0 ; a<6 ; a++)
    {
        if (a == rota[1])
        {
            for (b=0 ; b<6 ; b++)
            {
                if (b == rota[2])
                {
                    soma += matriz[a][b];
                }
                else continue;
            }
        }
        else continue;
    }

    for (a=0 ; a<6 ; a++)
    {
        if (a == rota[2])
        {
            for (b=0 ; b<6 ; b++)
            {
                if (b == rota[3])
                {
                    soma += matriz[a][b];
                }
                else continue;
            }
        }
        else continue;
    }

    for (a=0 ; a<6 ; a++)
    {
        if (a == rota[3])
        {
            for (b=0 ; b<6 ; b++)
            {
                if (b == rota[4])
                {
                    soma += matriz[a][b];
                }
                else continue;
            }
        }
        else continue;
    }

    for (a=0 ; a<6 ; a++)
    {
        if (a == rota[4])
        {
            for (b=0 ; b<6 ; b++)
            {
                if (b == rota[5])
                {
                    soma += matriz[a][b];
                }
                else continue;
            }
        }
        else continue;
    }

    printf("%d", soma);

    fclose(stdin);
    fclose(stdout);

    return 0;
}

