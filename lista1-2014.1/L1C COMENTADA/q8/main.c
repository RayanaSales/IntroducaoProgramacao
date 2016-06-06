//Rayana Araujo sales
#include <stdio.h>
#include <stdlib.h>

int multiplicacao (int a,int b) /*soma, um valor, a qtd de vezes que esse valor eh. 
                                b eh o valor que vai ser somado, a eh a qtd de vezes que a vai ser somado. */ 
{ 
    int j=0, soma=0;
        
        for(j=0; j<a ; j++)  
        {
	             soma+=b; 
        }
        return soma;
}

int exponenciacao (int base,int expoente)
{ 
    int i=1, n=base, soma=0; /* ela pega o valor da primeira soma, guarda o valor, 
                             e soma ele mesmo a qtd de vezes que eh a potencia. 4+4=8 -> 8+8=16 
                             porem como ja comeca com i=1, ele ja subtrai 1[no for] do valor da potencia*/
                             
                             for(i=1; i<expoente; i++) //esse ? o for na vertical, ele tem que ser menor que o expoente, pq se da pelo p-1
                             {
	                                  soma=0; //zerar o valor da soma, se n?o ele entra com um valor e atribui outro por cima.

	                                  soma=multiplicacao(base,n); //essa ? a chamada da fun??o multiplica??o

	                                  n=soma; //para no segundo loop em diante, se somado o valor da soma passada.
                             }   
                               return soma;
}

int main(void)
{ int b, p, soma=0;

freopen("e8.txt" , "r", stdin);
freopen("s8.txt", "w", stdout);

do 
{
	scanf ("%d %d", &b, &p);

     if (p == 1) //qualquer numero elevado a 1, ? igual a ele mesmo.
     	printf("%d\n", b);
     else if (p>1) //porque se for 0, ele n?o mostra nada, s? sai do c?digo.
     {
     	soma=exponenciacao (b,p); //chamada da fun?ao. a variavel soma recebe o retorno da fun??o. Nome dela com os aparametros
     	printf ("%d\n", soma);
     	soma=0;
     }
}while(b!=0 && p!=0);

fclose(stdin);
fclose(stdout);	

 return 0;
}

