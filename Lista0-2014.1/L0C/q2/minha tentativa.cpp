#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{ 
system ("COLOR d1");

float n, dif, a;

printf("digite um numero nao inteiro: \n");
scanf("%f", &n); //pega o valor de n digitado pelo usuario. ex=3.2
a=(int)n;  //convertendo um numero float a uma parte inteira, ele imprime so a parte inteira, ex: 3.2 ele imprime 3. "a" � a vriavel q vai guarar a parte float do n
printf("%.0f", a); //imprime o numero convertido sem nenhuma casa decimal
dif=n-a; //subtrai o float do inteiro. ex= 3.2-3= 0.2
dif= dif*10; // 0.2 * 10
printf(" %.0f", dif); //o espa�o aq fica antes pq n�o tem nenhuma instru�ao depois (printf), se tivesse ficaria depois 

 
while (n % 10 != 0)
{
scanf ("%f", &n);
a =(int)n;
printf ("%.0f", a);
dif = n-a;
dif = dif * 10;
printf ("%.0f", div);          
}
  system("PAUSE");	
    return 0;
}
