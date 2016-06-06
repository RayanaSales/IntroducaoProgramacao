//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
unsigned int n, altura43, largura43, altura169, largura169;
char c , w, h;

freopen("e4.txt" , "r", stdin);
freopen("s4.txt", "w", stdout);

                  scanf ("%u %c", &n , &c);

                  altura43 = 3*n/4;
                  largura43 = 4*n/3;
                  altura169 = 9*n/16;
                  largura169 = 16*n/9;

                    if (c=='W')
                    {
                       printf ("4:3 = %ux%u\n", altura43, n);
                       printf ("16:9 = %ux%u", altura169, n);
                    }

                    else if (c=='H')
                    {
                         printf ("4:3 = %ux%u\n", largura43, n);
                         printf ("16:9 = %ux%u", largura169, n);
                    }



fclose(stdin);
fclose(stdout);

 return 0;
}
