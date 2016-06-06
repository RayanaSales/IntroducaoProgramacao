//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI (3.141592653589793)

double calculapi(int); //prototipo

int main()
{ int n;
  double erro;

freopen("e7.txt" , "r", stdin);
freopen("s7.txt", "w", stdout);


scanf("%d", &n);

printf ("PI: %.15lf\n", calculapi(n));   //chamada da função

erro = (calculapi(n) - PI) / PI; //calculando o erro
if (erro <0)
{
erro *= -1;
}
printf ("Erro: %.15lf\n", erro);

fclose(stdin);
fclose(stdout);
return 0;
}

double calculapi(int k) //função, k recebe o valor de n, la do calculapi(n)
{
double soma=0,parte1,parte2,parte3,parte4,parte5,lado2,meupi;
int i;
for(i=0; i<=k; i++)
{
 parte1=1.0/(pow(16, i));
 parte2=4.0/(8.0*i + 1);
 parte3=2.0/(8.0*i + 4);
 parte4=1.0/(8.0*i + 5);
 parte5=1.0/(8.0*i + 6);
 lado2 = (parte2 - parte3 - parte4 - parte5);
 meupi = parte1*lado2;
 soma += meupi;
}
return soma;
}


