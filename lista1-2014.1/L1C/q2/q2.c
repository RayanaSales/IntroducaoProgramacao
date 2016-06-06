//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{ unsigned int n, posicaodagarrafa, comprimentopista, pretendepercorrer, i=1;

freopen ("e2.txt" , "r", stdin);
freopen ("s2.txt" , "w", stdout);

        scanf ("%u", &n);

              for (i=1;i<=n;i++)
              {
                  scanf ("%u %u", &comprimentopista, &pretendepercorrer);
                  posicaodagarrafa = comprimentopista % pretendepercorrer;
                  printf ("%u\n", posicaodagarrafa);
              }

fclose(stdin);
fclose(stdout);

 return 0;
}
