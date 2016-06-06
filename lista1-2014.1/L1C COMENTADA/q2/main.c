//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{ int n, resultado, cp, pc, i=1;

freopen ("e2.txt" , "r", stdin);
freopen ("s2.txt" , "w", stdout);

scanf ("%d", &n);

for (i=1;i<=n;i++)
{
scanf ("%d %d", &cp, &pc);
resultado = cp % pc;
printf ("%d\n", resultado);
}

fclose(stdin);
fclose(stdout);
 	
 return 0;
}
