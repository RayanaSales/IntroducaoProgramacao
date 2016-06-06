//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char substring[20], string[20], letra_substring, letra_string, lixo;
    int i, num, j, k, t, z, cont_substring=0, cont_string=0, cont_repetidas=0;

    freopen("e7.txt", "r", stdin);
    freopen("s7.txt", "w", stdout);

    scanf("%d", &num);

    scanf("%c", &lixo);

    for (i=0 ; i<num ; i++)
    {

        letra_substring = 'a';
        letra_string = 'a';

        scanf("%19s %19s", substring, string);

        while(substring[cont_substring]!='\0')
  		{
   			if(substring[cont_substring]=='\0')
   				break;
   			cont_substring++;
  		}

		 while(string[cont_string]!='\0')
  		{
   			if(string[cont_string]=='\0')
   				break;
   			cont_string++;
  		}

        for (k=0 ; k < cont_string ; k++)
        {
            if ( string[k] == substring[0] )
            {
                cont_repetidas += 1;

                for (j=1 ; j < cont_substring ; j++)
                {
                    if (string[k+j] == substring[j] )
                        cont_repetidas += 1;
                }

                if ( cont_repetidas == cont_substring)
                    break;

                cont_repetidas = 0;
            }
        }

        if (cont_repetidas == cont_substring)
        {
            for (t=0 ; t<cont_substring ; t++)
                printf("%c", substring[t]);

            printf(" eh substring de ");

            for (z=0 ; z<cont_string ; z++)
                printf("%c", string[z]);

            printf("\n");
        }

        else if (cont_repetidas != cont_substring)
        {
            for (t=0 ; t<cont_substring ; t++)
                printf("%c", substring[t]);

            printf(" nao eh substring de ");

            for (z=0 ; z<cont_string ; z++)
                printf("%c", string[z]);

            printf("\n");
        }
        cont_substring=0;
        cont_string=0;
        cont_repetidas=0;
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}
