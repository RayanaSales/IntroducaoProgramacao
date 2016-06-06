#include <stdio.h>
#include <stdlib.h>
#define T 25

int main()
{
  int i=0, j=0, k=0;
  char LetrasDigitadas[T], contadorDeLetras[54], TodasAsLetras[]={'A', 'B', 'C', 'D' ,'E' ,'F', 'G', 'H', 'I', 'J', 'K', 'L' , 'M', 'N', 'O', 'P', 'Q' , 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' , 'j', 'k' , 'l', 'm' , 'n' , 'o' , 'p', 'q', 'r' ,'s' ,'t' , 'u', 'v', 'w', 'x', 'y', 'z'}, elementos;

   freopen("e20.txt", "r", stdin);
   freopen("s20.txt", "w", stdout);

   for(k=0; k<52;k++)
   {
       contadorDeLetras[k] = 0;
   }

  for (i=0 ; i<T; i++)
  {
      if(i == T - 1)
          scanf("%c", &elementos);
      else
          scanf("%c ", &elementos);

      LetrasDigitadas[i] = elementos;
  }

  for (j=0 ; j<T ; j++) //percorre todas os elementos do primeiro vetor
  {
      for (k=0 ; k<52 ; k++)//percorre todas as variaveis do segundo vetor
      {
          if(LetrasDigitadas[j] == TodasAsLetras[k]) //compara elas, vendo se há algum elemento do vetor letrasdigitadas igual ao vetor todas as letra.
          {
                contadorDeLetras[k] += 1;
          }
      }
  }

  // For que percorre todo o contador e imprime a letra com a quantidade
  for(k=0; k<52; k++)
  {
      // Esse if, faz com que imprima só as letras que tenham contador > 0, ou seja, letras que apareceram pelo menos uma vez
      if(contadorDeLetras[k] > 1)
         printf("%c=%d\n",TodasAsLetras[k], contadorDeLetras[k]);

  }

  fclose(stdin);
  fclose(stdout);
  return 0;

}
