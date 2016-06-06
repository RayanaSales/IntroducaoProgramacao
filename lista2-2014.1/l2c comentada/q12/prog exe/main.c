#include <stdio.h>

#include <stdlib.h>

/*void reopen(char * e, char * s) {

 freopen(e, "r", stdin); freopen(s, "w", stdout);

}

void close(void) {

 fclose(stdin); fclose(stdout);

} */

void somar(int x, int y, int *r) { *r = x + y; }

void subtrair(int x, int y, int *r) { *r = x – y; }

void dividir(int x, int y, int *r) {

 if (y == 0) //interrompe execução do programa

 exit(EXIT_FAILURE);

 *r = x / y;

}

void multiplicar(int x, int y, int *r) { *r = x * y; }

int main(void) {

 int a, b, resultado, opcao;

 //Vetor de ponteiro para função

 void (*f[]) (int, int, int*) =

{somar, subtrair, dividir, multiplicar};

 //reopen("ex10.txt", "sx10.txt");

 do {

 /*

 * opcao 0 - soma

 * opcao 1 – subtração

 * opcao 2 – divisão

 * opcao 3 – multiplicação

 * opcao 4 - sair

 */

 scanf("%d", &opcao);

 if (opcao >= 0 && opcao < 4) {

 scanf("%d %d", &a, &b);

 f[opcao](a, b, &resultado);

 printf("%d\n", resultado);

 }

 } while (opcao != 4);

 //close();

 return EXIT_SUCCESS;

}
