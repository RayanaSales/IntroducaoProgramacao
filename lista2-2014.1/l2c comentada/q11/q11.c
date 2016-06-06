//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;

    freopen("e11.txt", "r", stdin);
    freopen("s11.txt", "w", stdout);

    scanf("%d", &n);

    if (n >= 2 || n <= 9)
    {
        int **matriz; //ponteiro de ponteiro
        matriz = (int**)calloc(n, sizeof(int*)); //aloco memoria (apenas para uma linha, ou seja, um vetor, de toda a matriz, para esse ponteiro de ponteiro)

        if (matriz == NULL)
        {
            printf("memoria insuficiente para alocar");
            return 0;
        }

        for (i = 0; i < n; i++) //percorro o vetor
        {
            matriz[i] = (int*)calloc(n, sizeof(int)); //aloco mais espaco agora para a coluna
                                                        //depois tenho minha matriz completa e eh so usar a formula
            if (matriz[i] == NULL)
            {
                printf("memoria insuficiente para alocar");
                return 0;
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                matriz[i][j] = ((1 + i) * (j + 1));
                printf("%d ", matriz[i][j]);
            }

            printf("\n");
        }

        realloc(matriz,0);
    }

    else
        return 0;

    fclose(stdin);
    fclose(stdout);

    return 0;

}
