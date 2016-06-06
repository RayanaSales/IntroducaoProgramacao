#include <stdio.h>
#include <stdlib.h>

int main()
{ int matriz[6][6], rota[6], i, j, k, l, m, contadorNomeMatriz=0, contadorNomeRota=0, destino, a, b, soma = 0;
    char nomeDaMatriz[20], letraMatriz, nomeDaRota[20], letraRota;

    freopen("e4.txt", "r", stdin);
    freopen("s4.txt", "w", stdout);

    while (letraMatriz != '\n') //lendo o nome da matriz
    {
      scanf("%c", &letraMatriz);
        contadorNomeMatriz += 1;
        nomeDaMatriz[contadorNomeMatriz] = letraMatriz;
    }

    for (i=0 ; i<6 ; i++) //lendo os elementos da matriz
    {
        for (j=0 ; j<6 ; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

   int contadorN = 0; // lendo o nome da rota
   while (contadorN < 2) // pq ele lê dois \n.
   {
       scanf("%c", &letraRota);

       if(letraRota != '\n')
        {
           if(letraRota != ' ')
           {
              contadorNomeRota += 1;
              nomeDaRota[contadorNomeRota] = letraRota;
           }
       }
       else
           contadorN++;
   }

    for (i=0 ; i<6 ; i++) //lendo o vetor rota
    {
        scanf("%d ", &rota[i]);
    }

    //a partir daq, calculos
    for (a=0 ; a<6 ; a++)
    {
        if (a == rota[0])
        {
            for (b=0 ; b<6 ; b++)
            {
                if (b == rota[1])
                {
                    soma += matriz[a][b];
                }
                else continue;
            }
        }
        else continue;
    }

    for (a=0 ; a<6 ; a++)
    {
        if (a == rota[1])
        {
            for (b=0 ; b<6 ; b++)
            {
                if (b == rota[2])
                {
                    soma += matriz[a][b];
                }
                else continue;
            }
        }
        else continue;
    }

    for (a=0 ; a<6 ; a++)
    {
        if (a == rota[2])
        {
            for (b=0 ; b<6 ; b++)
            {
                if (b == rota[3])
                {
                    soma += matriz[a][b];
                }
                else continue;
            }
        }
        else continue;
    }

    for (a=0 ; a<6 ; a++)
    {
        if (a == rota[3])
        {
            for (b=0 ; b<6 ; b++)
            {
                if (b == rota[4])
                {
                    soma += matriz[a][b];
                }
                else continue;
            }
        }
        else continue;
    }

    for (a=0 ; a<6 ; a++)
    {
        if (a == rota[4])
        {
            for (b=0 ; b<6 ; b++)
            {
                if (b == rota[5])
                {
                    soma += matriz[a][b];
                }
                else continue;
            }
        }
        else continue;
    }

    printf("%d", soma);

    fclose(stdin);
    fclose(stdout);

    return 0;
}

