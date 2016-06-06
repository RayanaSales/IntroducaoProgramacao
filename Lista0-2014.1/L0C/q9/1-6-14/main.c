#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, q, c;

    for (i=0 ; i <10 ; i++)
    {
        q = pow(i,2);
        c = pow(i,3);
        printf("%d %d %d\n", i, q, c);
    }

return 0;
}
