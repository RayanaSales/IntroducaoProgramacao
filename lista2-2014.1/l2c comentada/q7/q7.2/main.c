//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char substring[20], string[20], letra_substring, letra_string;
    int j, k, t,z, cont_substring=0, cont_string=0, cont_repetidas=0, x=1, r;

    freopen("e7.txt", "r", stdin);
    freopen("s7.txt", "w", stdout);

    while (letra_substring != ' ')
    {
        scanf("%c", &letra_substring);

            if (letra_substring == ' ')
                break;

        cont_substring += 1;

        substring[cont_substring] = letra_substring;
    }

    printf("cont_substring: %d , letra_substring: %c ", cont_substring, letra_substring );

    for (r=0 ; r<cont_substring ; r++)
    {
        printf("%c ", substring[r]);
    }
/*
    while (letra_string != '\n')
    {
        scanf("%c", &letra_string);

            if (letra_string == '\n')
                break;

        cont_string += 1;

        string[cont_string] = letra_string;
    }


    for (j=1 ; j <= cont_substring ; j++) //dar um jeito desse for verificar uma apos a outra. Se uma letra se repitir, verifique a outra e assim por diante.
                                            //aq nesse meu for se apenas uma letra se repete ela já eh substring porem so eh sub qd todas se repetem na ordem.
    {
        for (k=1 ; k <= cont_string ; k++)
        {

                while (x <= cont_string)
                {
                        if (substring[j] == string[k])
                        {
                            cont_repetidas += 1;
                            x += 1;
                        }

                        else
                        {
                            cont_repetidas = 0;
                            break;
                        }
                }
        }
    }

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
            //printf("%c", substring[t]);

        printf(" nao eh substring de ");

        for (z=1 ; z<=cont_string ; z++)
           // printf("%c", string[z]);
    }

    */

    fclose(stdin);
    fclose(stdout);

    return 0;
}
