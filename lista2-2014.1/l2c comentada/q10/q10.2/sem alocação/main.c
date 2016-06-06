#include <stdlib.h>
#include <stdio.h>

int main()
{
 int i, j, l, c;

    scanf("%d %d", &l, &c);

    int m[l][c];

        for (i = 0; i < l; i++)
                for (j = 0; j < c; j++)
                        scanf("%d", &m[i][j]);



        for (i = 0; i < l; i++)
        {
            for (j = 0; j < c; j++)
            {
                printf("%d", m[i][j]);
                    //if (j != c - 1)
                printf(" ");
            }

            printf("\n");
        }

 return 0;
}
