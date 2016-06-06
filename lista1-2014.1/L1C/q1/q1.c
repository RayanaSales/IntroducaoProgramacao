//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
unsigned int numpis, comppista, distped, valped, valcomb, i, v1, v2, vt, variavel;

freopen("e1.txt" , "r", stdin);
freopen("s1.txt", "w", stdout);


                  scanf ("%u", &numpis);


                        for (i=1 ; i <= numpis ; i++)
                        {
                            scanf ("%u %u %u %u", &comppista, &distped, &valcomb, &valped);

                            v1 = comppista * valcomb;
                            variavel = comppista / distped;
                            v2 = variavel * valped;
                            vt = v1 + v2;

                            printf ("%u\n", vt);
                         }

fclose(stdin);
fclose(stdout);

return 0;
}

