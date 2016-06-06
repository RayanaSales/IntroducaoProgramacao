//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#define L 5

void ler(int v[])
{
    int i;

    for (i=0 ; i<L ; i++)
        scanf("%d", &v[i]);
}

void ordenar(int v[])
{
    int i, j, k, troca;

    for (i = 0 ; i < ( L - 1 ); i++)
    {
        for (j = 0 ; j < L - i - 1; j++)
        {
            if (v[j] > v[j+1])
            {
                troca   = v[j];
                v[j]   = v[j+1];
                v[j+1] = troca;
            }
        }
    }
}

void popularMatriz(int m[L][L], int v[], int i)
{
    int j;

    for (i=0 ; i<5 ; i++)
    {
        for (j=0 ; j<5 ; j++)
        {
            m[i][j] = v[j];
        }
    }
}

void imprimirMatriz(int m[L][L])
{
    int i, j;

    for (i=0 ; i<1 ; i++)
    {
        for (j=0 ; j<5 ; j++)
        {
            if (j == 4)
                printf("%d", m[i][j]);

            else
                printf("%d, ", m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int v[5], i, j, k, x, troca, m[5][5];

    freopen("e6.txt", "r", stdin);
    freopen("s6.txt", "w", stdout);

    for (i=0 ; i<L ; i++)
    {
        ler(v);

        ordenar(v);

        popularMatriz(m, v, x);

        imprimirMatriz(m);
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}





