#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j , linha, coluna;

    scanf("%d %d", &linha, &coluna);

    int *matriz[linha][coluna];

    matriz = (int*) malloc(linha*sizeof(int));

     if (matriz != NULL)
    { //Verificando se a alocação ocorreu com sucesso
         for (i = 0; i < linha; i++)
        {
            for (j=0 ; j<coluna ; j++)
            {
                scanf("%d ", &matriz[i][j]);
            }
             printf("\n");
        }
    free(matriz);
    }

    else
            printf("Memória insuficiente\n");

        for (i = 0; i < linha; i++)
        {
            for (j=0 ; j<coluna ; j++)
            {
                printf("%d ", &matriz[i][j]);
            }
             printf("\n");
        }
    system("PAUSE");
    return 0;
}
