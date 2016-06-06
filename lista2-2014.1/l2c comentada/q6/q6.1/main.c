#include <stdio.h>
#include <stdlib.h>
#define L 5

int main()
{
    int v[L], i, j, k, troca, m[1][1];

    for (i=0 ; i<L ; i++)
        scanf("%d", &v[i]);

    for (i = 0 ; i < ( L - 1 ); i++)
          {
              for (j = 0 ; j < L - i - 1; j++)
              {
                  if (v[j] > v[j+1])
                  {
                     troca   = v[j];
                     v[j]   = v[j+1];
                     v[j+1] = troca;
                  }
              }
          }

  /*  for ( i = 0 ; i < 5 ; i++ )
              printf("%d", v[i]);

            printf("\n"); */

    for (i=0 ; i<1 ; i++)
    {
        for (j=0 ; j<5 ; j++)
        {
            m[i][j] = v[j];
        }
    }

    for (i=0 ; i<1 ; i++)
    {
        for (j=0 ; j<5 ; j++)
        {
            if (j == 4)
                printf("%d", m[i][j]);

            else
                printf("%d, ", m[i][j]);
        }
    }

    printf("\n");

    system("PAUSE");
    return 0;
}




