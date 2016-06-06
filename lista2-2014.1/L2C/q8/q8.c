//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    int contador=0, i, j, troca, somaInt=0, t=1;
    unsigned int num = 1, somaUsgInt=0, maior, *ponteiro;
    double mediaDouble, contadorDouble=0.0;

    freopen("e8.txt", "r", stdin);
    freopen("s8.txt", "w", stdout);

    ponteiro = (unsigned int*) malloc(TAM * sizeof(unsigned int));

    if(ponteiro!= NULL)
    {
        while(num != 0)
        {
            scanf("%d", &num);

            if(num == 0)
                break;

            *(ponteiro+contador) = num;
            if(contador==(TAM-1)*t)
            {
                t *= 2;
                realloc(ponteiro, t*TAM*sizeof(unsigned int));
            }
            ++contador;
        }

        for (i = 0 ; i < (contador - 1 ); i++)
        {
            for (j = 0 ; j < contador - i - 1; j++)
            {
                if (*(ponteiro+j) > *(ponteiro+j+1))
                {
                    troca   = *(ponteiro +j);
                    *(ponteiro+j)  = *(ponteiro+j+1);
                    *(ponteiro+j+1) = troca;
                }
            }
        }

        for (i = 0; i < contador; i++)
            printf("%d ", *(ponteiro+i));

        printf("\n");

        for (i=0 ; i<contador ; i++)
            somaUsgInt += *(ponteiro+i);

        mediaDouble = (double)somaUsgInt;
        contadorDouble = (double)contador;
        mediaDouble /= contadorDouble;

        printf("%.1lf\n", mediaDouble);


        printf("%d\n", *(ponteiro + contador-1));

        printf("%d\n", *(ponteiro));


        free(ponteiro);
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}
