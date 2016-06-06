//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main()
{
 unsigned int a=0, b=1, auxiliar, i=0, num, soma=0, f;

 freopen("e16.txt", "r", stdin);
 freopen("s16.txt", "w", stdout);

 scanf("%u", &num);

 for(i = 0; i <= num; i++)
 {
   f = fibonacci(i);
   soma += f;

   if(i>0)
      printf("+%u", f);
   else
      printf("%u", f);
 }

 printf("=%u\n", soma);


fclose(stdin);
fclose(stdout);
return 0;
}

int fibonacci(int n)
{
    if(n < 2)
       return n;
    else
       return fibonacci(n - 1) + fibonacci(n - 2);
}
