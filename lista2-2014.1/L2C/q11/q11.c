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
        int **matriz;
        matriz = (int**)calloc(n, sizeof(int*));

        if (matriz == NULL)
        {
            printf("memoria insuficiente para alocar");
            return 0;
        }

        for (i = 0; i < n; i++)
        {
            matriz[i] = (int*)calloc(n, sizeof(int));

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
