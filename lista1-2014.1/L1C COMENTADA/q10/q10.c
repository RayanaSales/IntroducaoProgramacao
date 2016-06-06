//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n, i=1 , j=1, soma, contador = 0;
  double quadrado;
  
  freopen("e10.txt", "r", stdin);
  freopen("s10.txt", "w", stdout);
  
  while(n != 0)
  {
    scanf("%d", &n);
    
    for (j=1 ; j<n ; j++) 
    {
             quadrado = pow(j,2);
             //tem algum numero que elevado ao quadrado, seja igual ao proprio n ? Se tiver, entre no if a seguir, se nao tiver saia do for por ser imperfeito.
                      if(quadrado == n) // ele eh perfeito, entao calcule a soma dos impares menores que ele, que resultem nele. Se for imperfeito, saia do for.
                      { 
                                  contador = 1; //boto um contador aq, pq no proximo if não basta o n!=0 para impedir o numero de satisfazer a condicao dos imperfeitos, tem q ter algo a mais para impedir que o numero entre no if dos imperfeitos.
                                  
                                  printf("%d=1",n); 
                                  soma = 1;
                                  for (i=3; i < n; i += 2)
                                  {
                                            if(soma != n) 
                                            {
                                                    soma += i;                  
                                                    printf("+%d", i);            
                                            }
                                  }              
                                  printf("\n");
                       } 
              
    }   
                        if(contador == 0 && n != 0) //contador vai ser =0, pq o numero saiu do for por nao satisfazer a coondicao do if, logo nao teve o contador alterado.
                                                    //se o contador chegar aq sendo 0, é pq ele nem entrou direito no for e logo saiu, se ele nao entrou, ele e imperfeito, pq no if do for, so entram perfeitos.
                                  printf("imperfeito\n");  
                                  contador = 0;
  }
      
fclose(stdin);
fclose(stdout);

//system("PAUSE");      
	
  return 0;
}
