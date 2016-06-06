//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char substring[19], string[19], letra_substring, letra_string;
    int a, i, j, k, t, z, cont_substring=0, cont_string=0, cont_repetidas=0;

    freopen("e7.txt", "r", stdin);
    freopen("s7.txt", "w", stdout);

    while (letra_substring != ' ')
    {
        scanf("%c", &letra_substring);

            if (letra_substring == ' ')
                break;

        substring[cont_substring] = letra_substring;

         cont_substring += 1;
    }

  /*  printf("contador da substring: %d\n", cont_substring);

    for (r=0 ; r<cont_substring ; r++)
        printf("%c ", substring[r]);

    printf("\n"); */

    while (letra_string != '\n')
    {
        scanf("%c", &letra_string);

            if (letra_string == '\n')
                break;

        string[cont_string] = letra_string;

        cont_string += 1;
    }

  /*  printf("contador da string: %d\n", cont_string);

    for (r=0 ; r<cont_string ; r++)
        printf("%c ", string[r]);

    printf("\n"); */

    for (j=0 ; j < cont_string ; j++)
    {
        for (k=0 ; k < cont_substring ; k++)
        {
                        if (substring[j] == string[k])
                            cont_repetidas += 1;

                        else if (substring[j] == string[k+1])
                            cont_repetidas += 1;

                        else if (substring[j+1] == string[k])
                            cont_repetidas += 1;

                        else
                            continue;
        }
    }

    //printf("%d",cont_repetidas);

    if (cont_repetidas == cont_substring)
    {
        for (t=0 ; t<cont_substring ; t++)
            printf("%c", substring[t]);

        printf(" eh substring de ");

        for (z=0 ; z<cont_string ; z++)
            printf("%c", string[z]);
    }

    else if (cont_repetidas != cont_substring)
    {
        for (t=0 ; t<cont_substring ; t++)
            printf("%c", substring[t]);

        printf(" nao eh substring de ");

        for (z=0 ; z<cont_string ; z++)
            printf("%c", string[z]);
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}
