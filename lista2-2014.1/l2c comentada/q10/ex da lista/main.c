#include <stdio.h>
#include <stdlib.h>

//A função criarMatrizcria uma matriz de inteiros dinamicamente.

int** criarMatriz(int linha, int coluna)
{

    int i, j, **m = (int**) malloc(linha * sizeof (int*));

        if (m == NULL)
        {
            printf("Nao foi possivel alocar memoria para a matriz");
            exit(EXIT_FAILURE); //a função exit termina a execução do programa.
        }

    for (i = 0; i < linha; i++)
    {
        m[i] = (int*) malloc(coluna * sizeof (int));

            if (m[i] == NULL)
            {
                printf("Nao foi possivel alocar memoriia para a matriz");

                    for (j = 0; j < i; j++) //Liberando o espaço já alocado
                        free(m[j]);

                free(m);

                exit(EXIT_FAILURE);
            }
    }

 return m;

}

int main(void)
{

 int i, j, l, c, **m;

    scanf("%d %d", &l, &c);

    m = criarMatriz(l, c);

        for (i = 0; i < l; i++)
            for (j = 0; j < c; j++)
                m[i][j] = j;

        printf("{");

        for (i = 0; i < l; i++)
        {
            printf("{");

            for (j = 0; j < c; j++)
            {
                printf("%d", m[i][j]);
                    if (j != c - 1) printf(", ");
            }

            printf("}");

        }

        printf("}\n");

    for (i = 0; i < l; i++)
        free(m[i]);
            free(m);

 return 0;

}
