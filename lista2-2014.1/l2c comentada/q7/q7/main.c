//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char substring[20], string[20], letra_substring, letra_string;
    int n,x, a, j, k, i, m, t,z, cont_substring=0, cont_string=0, cont_repetidas=0;

    while (letra_substring != ' ') //a minha substring sai certa do laço
    {
        scanf("%c", &letra_substring);

            if (letra_substring == ' ')
                break;

        cont_substring += 1;

        substring[cont_substring] = letra_substring;
    }

    //for (t=1 ; t<=cont_substring ; t++)
        //printf("%c", substring[t]);

    //printf("\n");

    while (letra_string != '\n') //a minha string sai certa do laço
    {
        scanf("%c", &letra_string);

            if (letra_substring == '\n')
                break;

        cont_string += 1;

        string[cont_string] = letra_string;
    }

   //for (z=1 ; z<=cont_string ; z++)
      // printf("%c", string[z]);

    for (j=1 ; j <= cont_substring ; j++) //esse for conta qtas letras se repetem. o cont tb sai certo lo laco
    {
        for (k=1 ; k <= cont_string ; k++)
        {
                if(substring[j] == string[k])
                        cont_repetidas += 1;
        }
    }

    //printf("%d", cont_repetidas);

    if (cont_repetidas != 0)
    {
        for (t=1 ; t<=cont_substring ; t++)
            printf("%c", substring[t]);

        printf(" eh substring de ");

        for (z=1 ; z<=cont_string ; z++)
            printf("%c", string[z]);
    }

    else if (cont_repetidas == 0)
    {
        for (t=1 ; t<=cont_substring ; t++)
            printf("%c", substring[t]);

        printf(" nao eh substring de ");

        for (z=1 ; z<=cont_string ; z++)
            printf("%c", string[z]);
    }



    system("PAUSE");
    return 0;
}
