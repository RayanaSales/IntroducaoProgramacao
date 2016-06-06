//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main()
{
 int a=0, b=1, auxiliar, i, num, soma=0;
 
 freopen("e16.txt", "r", stdin);
 freopen("s16.txt", "w", stdout);

 scanf("%d", &num);
 
 for(i = 0; i <= num; i++)
 {
   int f = fibonacci(i);
   soma += f;
   
   if(i>0)
      printf("+%d", f);
   else
      printf("%d", f);
 } 
 
 printf("=%d\n", soma);


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
