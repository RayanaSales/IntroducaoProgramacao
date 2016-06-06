//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

void inverte(char vetor[30], int cont)
{
     if(vetor[cont] != '\0') //se nao houver nenhum \0
     {
         if(vetor[cont] != '\n') // tb nao pode haver nenhum \n
         {
            printf("%c", vetor[cont]); //imprima meu vetor, a partir do ultimo contador.
         }

         inverte(vetor, cont - 1); // o contador, sempre vai diminuindo. Ou seja, mostrando uma letra anterior.
     }
}

int main()
{
    char c = '\0', vetor[30];
    int n = 0, j, i, cont = 0;

    freopen("e17.txt", "r", stdin);
    freopen("s17.txt", "w", stdout);

    scanf("%d", &n);

    for (j= 0; j<= n ; j++)
    {

        for(i = 0; i < 30; i++) //anulando todos os 30 espacos do vetor
              vetor[i] = '\0';

        do//pego uma letra, adiciono um ao contador, e guardo a letra no vetor. Enquanto não for digitado um \n
        {
             scanf("%c", &c); //pega
             cont++; //indentifica qtas foram pegas
             vetor[cont] = c; //guarda no contador
        } while(c != '\n');


        inverte(vetor, cont);

        cont = 0; //o for vai rodar de novo, com outra string.

        if (j==0) //sem isso, apos a primeira string invertida e antes da segunda string tb invertida, eh impressa uma linha em branco.
            continue;
        else //em qualquer outra string invertida, quebre a linha antes de imprimir a proxima string.
            printf("\n");
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}
