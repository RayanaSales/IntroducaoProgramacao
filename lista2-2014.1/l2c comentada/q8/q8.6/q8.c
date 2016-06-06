//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    int contador=0, i, j, troca, somaInt=0, t=1; //esse t muda de acordo com a qtd de elemntos q o usuario digitar.
    unsigned int num = 1, somaUsgInt=0, maior, *ponteiro;
    double mediaDouble, contadorDouble=0.0;

    ponteiro = (unsigned int*) malloc(TAM * sizeof(unsigned int));

    if(ponteiro!= NULL)
    {
        while(num != 0)
        {
            scanf("%d", &num);

            if(num == 0)
                break;

            *(ponteiro+contador) = num; // percorre o ponteiro para ir pegando outros valores (funciona como um vetor)
            if(contador==(TAM-1)*t) //subtrai 1 pq considera como indice (10 elementos, vai de 0 a 9).Se a qtd de elementos for maior que 10, realloc.
            {
                t *= 2; //AQUI É PRA DOBRAR SEMPRE MULTIPLICANDO POR 2 --> T = T*2
                realloc(ponteiro, t*TAM*sizeof(unsigned int));//DOBRAMOS SEMPRE O TAMANHO DO VETOR

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

    system("PAUSE");
    return 0;
}
