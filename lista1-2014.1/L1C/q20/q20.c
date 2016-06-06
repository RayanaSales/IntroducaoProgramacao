//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#define T 25

int main()
{
    int i=0, j=0, k=0;
    char LetrasDigitadas[T], contadorDeLetras[52], TodasAsLetras[]= {'A', 'B', 'C', 'D' ,'E' ,'F', 'G', 'H', 'I', 'J', 'K', 'L' , 'M', 'N', 'O', 'P', 'Q' , 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' , 'j', 'k' , 'l', 'm' , 'n' , 'o' , 'p', 'q', 'r' ,'s' ,'t' , 'u', 'v', 'w', 'x', 'y', 'z'}, elementos;

    freopen("e20.txt", "r", stdin);
    freopen("s20.txt", "w", stdout);

    for(k=0 ; k<52 ; k++)
    {
        contadorDeLetras[k] = 0;
    }

    for (i=0 ; i<T; i++)
    {
        if(i == T - 1)
            scanf("%c", &elementos);
        else
            scanf("%c ", &elementos);

        LetrasDigitadas[i] = elementos;
    }

    for (j=0 ; j<T ; j++)
    {
        for (k=0 ; k<52 ; k++)
        {
            if(LetrasDigitadas[j] == TodasAsLetras[k])
            {
                contadorDeLetras[k] += 1;
            }
        }
    }

    for(k=0; k<52; k++)
    {
        if(contadorDeLetras[k] > 1)
            printf("%c: %d\n",TodasAsLetras[k], contadorDeLetras[k]);
    }

    fclose(stdin);
    fclose(stdout);

    return 0;

}
