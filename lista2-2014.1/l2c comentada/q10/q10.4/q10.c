#include <stdio.h>
#include <stdlib.h>

//A fun��o criarMatrizcria uma matriz de inteiros dinamicamente.

int** criarMatriz(int linha, int coluna) //funcao que aloca as coisas
{

    int i, j, **m = (int**) malloc(linha * sizeof (int*));

    if (m == NULL)
    {
        printf("Nao foi possivel alocar memoria para a matriz");
        exit(EXIT_FAILURE); //a fun��o exit termina a execu��o do programa.
    }

    for (i = 0; i < linha; i++)
    {
        m[i] = (int*) malloc(coluna * sizeof (int));

        if (m[i] == NULL)
        {
            printf("Nao foi possivel alocar memoria para a matriz");

            for (j = 0; j < i; j++) //Liberando o espa�o j� alocado
                free(m[j]);

            free(m);
            exit(EXIT_FAILURE);
        }
    }

    return m;
}

int main()
{
    int i, j, l, c, **m;

    scanf("%d %d", &l, &c);

    m = criarMatriz(l, c);
    m = criarMatriz(l, c);

    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &m[i][j]);



    for (i = 0 ; i < c ; i++) //matriz transporta
    {
        for (j = 0 ; j < l ; j++)
        {
            if (i == j)
                printf("%d ", m[i][j]);

            else if (i != j)
                printf("%d ", m[j][i]);
        }
        printf("\n");
    }

    for (i = 0; i < l; i++)
        free(m[i]);
    free(m);

    system("PAUSE");
    return 0;

}
