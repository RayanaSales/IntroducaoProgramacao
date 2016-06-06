//Rayana Araujo sales
#include <stdio.h>
#include <stdlib.h>

void multiplica(int x, int y, int *resultado);
void calculaExponenciacao(int base, int expoente, int *resultado);

int main(void)
{ int base, expoente, soma=0, *resultado = 0, num, i=0, aux;

freopen("e5.txt" , "r", stdin);
freopen("s5.txt", "w", stdout);

   scanf("%d", &num);      
                  
                  for (i = 0 ; i < num ; i++)
                  {
	                 scanf("%d %d", &base, &expoente);

                           if (expoente == 1)
     	                      printf("%d\n", base);
     	                      
     	                  else if (expoente == 0)
     	                      printf("1\n");

                           else if (expoente>1)
                           {
     	                        calculaExponenciacao(base, expoente, &aux);
                           }     
                           
                  } 
fclose(stdin);
fclose(stdout);

 return 0;
}

void  multiplica(int y, int x, int *resultado)
{ int j=0, soma=0;

      for(j=0 ; j<y ; j++)
	           soma+=*resultado;
	           *resultado=soma;
}

 void calculaExponenciacao(int base, int expoente, int *resultado)
{ int i, n=base;

      for(i=1; i<expoente; i++)
      {
	          multiplica(base, expoente, &n);
	           *resultado=n;
      }
          
      printf ("%d\n", *resultado);     
}
