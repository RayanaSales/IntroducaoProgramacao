//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, x, y, r, s;
char c , w, h;

freopen("e4.txt" , "r", stdin);
freopen("s4.txt", "w", stdout);

scanf ("%d %c", &n , &c);

x = 3*n/4;
y = 4*n/3;
r = 9*n/16;
s = 16*n/9;

if (c=='W')
{
printf ("4:3 = %d x %d\n", x,n);
printf ("16:9 = %d x %d", r,n);
}
else

if (c=='H')
{
printf ("4:3 = %dx%d\n", y, n);
printf ("16:9 = %dx%d", s, n);
}
else

printf ("Dados invalidos");

fclose(stdin);
fclose(stdout);

 return 0;
}
