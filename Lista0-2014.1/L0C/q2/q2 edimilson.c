#include <stdio.h>
#include <stdlib.h>

//este aq, so funciona com uma casa decimal, ex 4.5, se for 4,55 não funciona.

int main(void)
{ 
    float n, dif, a;
    printf("digite um numero nao inteiro: \n");
    scanf("%f", &n); //pega o valor de n digitado pelo usuario. ex=3.2
    a=(int)n;  //convertendo um numero float a uma parte inteira, ele imprime so a parte inteira, ex: 3.2 ele imprime 3
    printf("%.0f", a); //imprime o numero convertido sem nenhuma casa decimal
    dif=n-a; //subtrai o float do inteiro. ex= 3.2-3= 0.2
    dif = dif*10; // 0.2 * 10
    printf(" %.0f", dif); //o espaço aq fica antes pq não tem nenhuma instruçao depois (printf), se tivesse ficaria depois 
  
    system("PAUSE");	
    return 0;
}
