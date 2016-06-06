//Rayana Araujo Sales
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct aritmeticaStr
{
    int x, y, z;
    char op;
    bool erro;
};

typedef struct aritmeticaStr aritmetica;

void soma(aritmetica* calc)
{
    (*calc).z = (*calc).x + (*calc).y;

    (*calc).op = '+';

    (*calc).erro = false;

}

void subtracao(aritmetica* calc)
{
    (*calc).z = (*calc).x - (*calc).y;

    (*calc).op = '-';

    (*calc).erro = false;

}

void multiplicacao(aritmetica* calc)
{
    (*calc).z = (*calc).x * (*calc).y;

    (*calc).op = '*';

    (*calc).erro = false;

}

void divisao(aritmetica* calc)
{

    (*calc).op = '/';

    if ( (*calc).y != 0)
    {
        (*calc).z = (*calc).x / (*calc).y;
        (*calc).erro = false;
    }

    else
    {
        (*calc).erro = true;
    }
}

int main()
{
    int n, i;
    int elemento;
    void (*vetor[]) (aritmetica**) =  {soma , subtracao , multiplicacao, divisao}; //vetor de ponteiros para chamadas de funcoes.

    freopen("e13.txt", "r", stdin);
    freopen("s13.txt", "w", stdout);

    aritmetica *ponteiro;

    scanf("%d ", &n);

    ponteiro = (aritmetica*) malloc(n * sizeof(aritmetica));

    if (ponteiro != NULL)
    {
        for (i=0 ; i<n ; i++)
        {
            scanf("%d", &elemento);

            scanf("%d %d", &ponteiro[i].x, &ponteiro[i].y);

            vetor[elemento](&ponteiro[i]); //chamada das funcoes q o elemento diz qual operacaos sera feita. passa como parametro um ponteiro q aponta para estrutura(onde tem o x, y etc)

            printf("%d ", ponteiro[i].x);
            printf("%c", ponteiro[i].op);
            printf(" %d = ", ponteiro[i].y);

            if (ponteiro[i].erro == false)
                printf("%d\n", ponteiro[i].z);
            else
                printf("erro\n");
        }
    }

    else
        printf("Memoria insuficiente\n");

    free(ponteiro);

    fclose(stdin);
    fclose(stdout);
    return 0;
}
