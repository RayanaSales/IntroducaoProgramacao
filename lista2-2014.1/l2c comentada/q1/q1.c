#include <stdlib.h>
#include <stdio.h>

int main(void) {
int i, j, k, l, matriz_a[3][3], matriz_b[3][3], elemento;

freopen("e1.txt", "r", stdin);
freopen("s1.txt", "w", stdout);

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
              scanf("%d ", &matriz_a[i][j]);
        }
    }

    for (k = 0; k < 3; k++)
    {
        for(l = 0; l < 3; l++)
        {
              scanf("%d ", &matriz_b[k][l]);
        }
    }

   for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
              for (k = 0; k < 3; k++)
              {
                  for(l = 0; l < 3; l++)
                  {
                        if (i==k && j==l)
                        {
                            elemento = matriz_a[i][j] + matriz_b[i][j];
                            printf("%d", elemento);
                        }
                  }
               }
            printf(" ");
        }
        printf("\n");
    }

fclose(stdin);
fclose(stdout);

return 0;
}
