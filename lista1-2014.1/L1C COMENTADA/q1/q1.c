//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int numpis, comppista, distped, valped, valcomb, i=1, v1, v2, vt, variavel;

freopen("e1.txt" , "r", stdin);
freopen("s1.txt", "w", stdout);


                  scanf ("%d", &numpis); // numero de pistas

                        for (i=1 ; i <= numpis ; i++)
                        {
                                 scanf ("%d %d %d %d", &comppista, &distped, &valcomb, &valped); /*comprimento da pista,distancia entre os pedagios,
                                                                 valor do combustivel por km rodado, valor do pedagio*/

                                 v1 = comppista * valcomb; /* 1km está para valcomb, assim como comppista esta para v1. v1=111*1=111*/
                                 variavel = comppista / distped; /* variavel = 111 / 37 = 3 */
                                 v2 = variavel * valped; // v2= 3 * 10=30
                                 vt = v1 + v2; //vt = 111+30=141

                                 printf ("%d\n", vt);
                        }

fclose(stdin);
fclose(stdout);

return 0;
}

