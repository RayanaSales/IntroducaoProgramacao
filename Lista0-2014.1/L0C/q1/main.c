#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, resto,i=0;
    printf ("Digite um numero inteiro: \n");
    scanf ("%d", &n);

    while (n != 0) //encontra os restos e coloca mais uma casa decimal
    {
        resto = n % 10; //ex: 123%10=3
        n = n - resto;  // 123-3=120
        n = n / 10;  //120/10
        i = i + resto; //armazena o valor 3 2 1 do resto, no i (a cada loop ele pegaum digito)
        i = i * 10; /*multiplicando por 10 fica: 1 * 10 = 10 + 2 = 12 * 10 = 120 + 3 = 123* 10 = 1230 + 4 = 12345
              fizemos isso para acrescentar mais uma casa decimal, para no segundo while, o numero 3 2 1 ficar 1 2 3 */
    }            // ate aq o numero é 3 2 1

    i=i/10;     // pq se não imprime 0 1 2 3 4

    while (i != 0) //extrair de novo o numero ja invertido e mostrar cada parte
    {
        resto = i % 10; //321%10=1.
        i = i - resto; //321-1=320
        i = i / 10; //320/10
        printf ("%d ", resto);
    }

    system("PAUSE");
    return 0;
}

