//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

double fatorial(int f)
{
    if(f == 0)
         return 1;
    else
        return fatorial(f - 1) * f;
}

int main()
{ int n=0, k=0, x, triang;

freopen("e9.txt", "r", stdin);
freopen("s9.txt", "w", stdout);

  scanf("%d", &x);

              for (n=0 ; n<x ; n++)
              {
                  for (k=0 ; k<=n ; k++)
                  {
                      triang = fatorial(n) / (fatorial(k) * fatorial(n-k));
                      printf("%d ", triang);
                  }
                  printf("\n");
              }

fclose(stdin);
fclose(stdout);

  return 0;
}
