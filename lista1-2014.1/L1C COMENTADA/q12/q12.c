//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

unsigned int calculaDia (unsigned int dia, unsigned int mes);
void imprimeDia (unsigned int diaDaSemana);

int main()
{
    int i = 0, n, dia=1, mes=1, diaDaSemana, dif=0;

    freopen("e12.txt", "r", stdin);
    freopen("s12.txt", "w", stdout);

    scanf("%d", &n);

    while (dia!=0 && mes !=0)
    {
       scanf("%d %d", &dia, &mes);

       if (dia == 0 && mes == 0)
       		break;

       diaDaSemana = calculaDia(dia, mes);

       diaDaSemana += n - 1; //tira o domingo para acresentar o n (primeiro dia do ano) ----> de onde quer começar a contar.
       	if (diaDaSemana > 7) //se passar de 7, volte a ser domingo.
       	 {
       	   dif=diaDaSemana%7;
           diaDaSemana=0;
           diaDaSemana+= dif;
         }

       imprimeDia(diaDaSemana);
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}

unsigned int calculaDia(unsigned int dia, unsigned int mes)
{
   unsigned int diaDaSemana, i, j;
   int qtddemeses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, soma=0, x;

    for (i = 0 ; i < mes; i++)
    {
        soma+=qtddemeses[i];
    }

	soma = soma - qtddemeses[mes - 1]; //tira o ultimo mes, para acresentar o dia da semana q ele inseriu
    diaDaSemana = (soma+dia)%7; //acrescento o dia e o programa comeca a contar cconsiderando q o primeiro dia do ano foi um domingo.

   return diaDaSemana;
}

void imprimeDia(unsigned int diaDaSemana)
{
     if(diaDaSemana == 1)
             printf("domingo\n"); else
     if(diaDaSemana == 2)
             printf("segunda feira\n"); else
     if(diaDaSemana == 3)
             printf("terca feira\n"); else
     if(diaDaSemana == 4)
             printf("quarta feira\n"); else
     if(diaDaSemana == 5)
             printf("quinta feira\n"); else
     if(diaDaSemana == 6)
             printf("sexta feira\n"); else
     if(diaDaSemana == 7)
             printf("sabado\n");
}
