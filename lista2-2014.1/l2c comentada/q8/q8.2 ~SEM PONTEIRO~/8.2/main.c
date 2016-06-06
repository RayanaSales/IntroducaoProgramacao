//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num, vetor[10], somaUsgInt=0, maior;
    int contador=0, i, j, troca, somaInt=0;
    double mediaDouble;

    freopen("e8.txt", "r", stdin);
    freopen("s8.txt", "w", stdout);

    while (num != 0)
    {
        scanf("%d", &num);

            if (num == 0)
                break;

        vetor[contador] = num;
        contador++;
    }

    for (i = 0 ; i < ( 9 - 1 ); i++)
          {
              for (j = 0 ; j < 9 - i - 1; j++)
              {
                  if (vetor[j] > vetor[j+1])
                  {
                     troca   = vetor[j];
                     vetor[j]   = vetor[j+1];
                     vetor[j+1] = troca;
                  }
              }
          }

    for (i=0 ; i<contador ; i++)
        somaUsgInt += vetor[i];

    somaInt = (int)somaUsgInt;
    mediaDouble = somaInt / contador;


    for (i=0 ; i<contador ; i++)
        printf("%d ", vetor[i]);
        printf("\n");

    printf("%.1lf\n", mediaDouble);

    printf("%d", vetor[--contador]); //maior, --contador pq nao conta com o 0, q nao foi armazenado no vetor, mas foi contado.
    printf("\n");
    printf("%d", vetor[0]); //depois do vetor ordenado, vetor[0] sempre eh o menor, assim como --contador sempre eh o maior.


    fclose(stdin);
    fclose(stdout);

    return 0;
}
