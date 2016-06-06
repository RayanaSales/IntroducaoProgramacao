//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

void inverte(char vetor[30], int cont)
{
     if(vetor[cont] != '\0')
     {
         if(vetor[cont] != '\n')
         {
            printf("%c", vetor[cont]);
         }

         inverte(vetor, cont - 1);
     }
}

int main()
{
    char c = '\0', vetor[30];
    int n = 0, j, i, cont = 0;

    freopen("e17.txt", "r", stdin);
    freopen("s17.txt", "w", stdout);

    scanf("%d", &n);

    for (j= 0 ; j<= n ; j++)
    {

        for(i = 0; i < 30; i++)
              vetor[i] = '\0';

        do
        {
             scanf("%c", &c);
             cont++;
             vetor[cont] = c;
        } while(c != '\n');


        inverte(vetor, cont);

        cont = 0;
        if (j==0)
            continue;
        else
            printf("\n");
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}
