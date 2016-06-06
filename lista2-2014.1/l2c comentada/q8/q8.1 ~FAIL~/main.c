#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 0, i;
    unsigned int elemento, vetor[5], *a, *b;

    while (elemento != 0)
    {
        scanf("&d", &elemento);

        if (elemento == 0)
            break;

        contador += 1;
        vetor[contador] = elemento;
    }

    *a = &vetor[0];

    for (i=0 ; i<contador ; i++)
    {
        if (contador <= 5)
        {
            unsigned int *a = (unsigned int*) malloc(5 * sizeof(unsigned int));

            if (malloc = NULL)
                printf("malloc nao funcionou");
        }

        else if (contador > 5)
        {
            unsigned int *b = (unsigned int*) realloc(b, 6 * sizeof(unsigned int));
        }
    }

    system("PAUSE");
    return 0;
}
