//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y)
{
 if (y == 0)    
    return x;
 else 
    return mdc(y, x % y);
}

int main()
{
int n, x, y, i=0, resultado; 

freopen("e15.txt", "r", stdin);
freopen("s15.txt", "w", stdout);

scanf("%d", &n);

            for(i=0;i<n;i++)
            {
                            scanf("%d %d", &x, &y);
                            resultado = mdc(x, y);

                            printf("%d\n",resultado);

            }

fclose(stdin);
fclose(stdout);
return 0;
}
