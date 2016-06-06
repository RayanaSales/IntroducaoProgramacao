#include <stdio.h>
#include <stdlib.h>

int main()
{ int matriz[6][6], rota[6], i, j, k, l,m, contadorNomeMatriz=0, contadorNomeRota=0, destino;
    char nomeDaMatriz[20], letraMatriz, nomeDaRota[20], letraRota;

    freopen("e4.txt", "r", stdin);
    freopen("s4.txt", "w", stdout);


    while (letraMatriz != '\n') //lendo o nome da matriz
    {
      scanf("%c", &letraMatriz);
        contadorNomeMatriz += 1;
        nomeDaMatriz[contadorNomeMatriz] = letraMatriz;
    }

    for (l=1 ; l<contadorNomeMatriz ; l++) //comeca do um, pq se for do 0, ele vai ler o \n e botar na saida um caracterer estranho ;D
    {                                      //mostrando o nome da matriz
        printf("%c", nomeDaMatriz[l]);
    }


    for (i=0 ; i<6 ; i++) //lendo os elementos da matriz
    {
        for (j=0 ; j<6 ; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    for (i=0 ; i<6 ; i++) // mostrando a matriz
    {
        for (j=0 ; j<6 ; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // O PROBLEMA EH A PARTIR DAQ

   int contadorN = 0;
   while (contadorN < 2) //lendo o nome da rota
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

       else if (letraRota == '\n')
            continue;

       else
           contadorN++;
   }

    for (m=0; m<=contadorNomeRota ; m++) //mostrando o nome da rota
    {
        printf("%c", nomeDaRota[m]);
    }

    for (i=0 ; i<6 ; i++) //lendo o vetor rota
    {
        scanf("%d ", &rota[i]);
    }

    printf("\n");

    for (k=0 ; k<6 ; k++) //mostrando a rota
    {
        printf("%d ", rota[k]);
    }

    fclose(stdin);
    fclose(stdout);

    //system("PAUSE");
    return 0;
}

