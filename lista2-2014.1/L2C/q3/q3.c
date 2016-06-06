//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, i, j, m[3][3], determinante;

    freopen("e3.txt", "r", stdin);
    freopen("s3.txt", "w", stdout);

    scanf("%d", &n);

    for (k=0 ; k<n ; k++)
    {

        for (i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                scanf("%d", &m[i][j]);
            }
        }

        for (i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                determinante = ((m[0][0] * m[1][1] * m[2][2]) + (m[0][1] * m[1][2] * m[2][0]) + (m[0][2] * m[1][0] * m[2][1])) - ((m[0][1] * m[1][0] * m[2][2]) + (m[0][0] * m[1][2] * m[2][1]) + (m[0][2] * m[1][1] * m[2][0]));
            }
        }

        printf("%d", determinante);
        printf("\n");

    }
    fclose(stdin);
    fclose(stdout);

    return 0;
}
