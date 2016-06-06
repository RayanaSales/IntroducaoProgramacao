//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, i, j, a1, b1, a2, b2, verificar_dadojack, parJack, pontosjack=0, imparJack, verificar_dadodaniel, parDaniel, pontosDaniel=0, imparDaniel;

freopen("e11.txt", "r", stdin);
freopen("s11.txt", "w", stdout);

scanf("%d", &n);

for (i=1 ; i<=n ; i++)
{
    for (j=0 ; j<3 ; j++)
    {
        scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

        verificar_dadojack = b1 % 2;

            if (verificar_dadojack == 0)
            {
                parJack = a1 + b1;
                pontosjack += parJack;
            }

            else
            {
                imparJack = a1 - b1;
                pontosjack += imparJack;
            }

        verificar_dadodaniel = b2 % 2;

            if (verificar_dadodaniel == 0)
            {
                parDaniel = a2 + b2;
                pontosDaniel += parDaniel;
            }

            else
            {
                imparDaniel = a2 - b2;
                pontosDaniel += imparDaniel;
            }
    }


    if (pontosjack>pontosDaniel)
                         printf("Jack\n");

    else if (pontosjack<pontosDaniel)
                         printf("Daniel\n");

    else if (pontosjack==pontosDaniel)
                         printf("Empate\n");

    a1=0;
    b1=0;
    a2=0;
    b2=0;
    verificar_dadojack=0;
    parJack=0;
    pontosjack=0;
    imparJack=0;
    verificar_dadodaniel=0;
    parDaniel=0;
    pontosDaniel=0;
    imparDaniel=0;
}

fclose(stdin);
fclose(stdout);

    return 0;
}
