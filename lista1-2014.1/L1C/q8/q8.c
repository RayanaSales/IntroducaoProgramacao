//Rayana Araujo sales
#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int, int);
int exponenciacao(int base, int expoente);

int main(void)
{ int b, p, soma=0;

freopen("e8.txt" , "r", stdin);
freopen("s8.txt", "w", stdout);


                  do
                  {
	                 scanf ("%d %d", &b, &p);

                           if (p == 1)
     	                      printf("%d\n", b);

                           else if (p>1)
                           {
     	                        soma=exponenciacao(b,p);
     	                        printf ("%d\n", soma);
     	                        soma=0;
                           }
                  } while(b!=0 && p!=0);

fclose(stdin);
fclose(stdout);
 return 0;
}

int multiplicacao(int a,int b)
{ int j=0, soma=0;

      for(j=0 ; j<a ; j++)
      {
	           soma+=b;
      }
return soma;
}

int exponenciacao(int base,int expoente)
{ int i=1, n=base, soma=0;

      for(i=1; i<expoente; i++)
      {
	           soma=0;

	           soma=multiplicacao(base,n);

	           n=soma;
      }
return soma;
}

