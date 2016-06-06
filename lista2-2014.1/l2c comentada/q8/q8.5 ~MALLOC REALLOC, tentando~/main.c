//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0, i, j, troca, somaInt=0;
    unsigned int num, vetor[contador], somaUsgInt=0, maior, *ponteiro = vetor;
    double mediaDouble, contadorDouble=0.0;

    ponteiro = (unsigned int*) malloc(10 * sizeof(unsigned int));

    ponteiro = (unsigned int*) realloc(ponteiro, 10 * sizeof(unsigned int));

if (ponteiro != NULL)
{


    if (ponteiro != NULL)
    {

    while (num != 0)
    {
        scanf("%d", &num);

            if (num == 0)
                break;

        vetor[contador] = num;
        contador++;
    }

    for (i = 0 ; i < (contador - 1 ); i++)
          {
              for (j = 0 ; j < contador - i - 1; j++)
              {
                  if (vetor[j] > vetor[j+1])
                  {
                     troca   = vetor[j];
                     vetor[j]   = vetor[j+1];
                     vetor[j+1] = troca;
                  }
              }
          }

    for (i = 0; i < contador; i++)
    {
        if (i==0)
            printf("%d", *ponteiro);

        else
            printf(", %d", *ponteiro);
        ponteiro++;
    }
    printf("\n");

    for (i=0 ; i<contador ; i++)
    {
        somaUsgInt += vetor[i];
    }

    mediaDouble = (double)somaUsgInt;
    contadorDouble = (double)contador;
    mediaDouble /= contadorDouble;

    printf("%.1lf\n", mediaDouble);

    for (i = 0; i < contador; i++)
    {
        if (i = --contador)
            printf("%d\n", vetor[i]);
        ponteiro++;
    }

    for (i = 0; i < contador; i++)
    {
        if (i==0)
            printf("%d\n", vetor[i]);
        ponteiro++;
    }

    free("ponteiro");
    }

    else
    {
        ("memoria insuficiente para alocar");
        free("ponteiro");
    }

  free("ponteiro");
}

else
{
        ("memoria insuficiente para alocar");
        free("ponteiro");
}


    system("PAUSE");
    return 0;
}
