#include <stdio.h>
#include <stdlib.h>

int main ()
{ int n, q1, q2, r1, q3, r2;

printf ("Insira um valor de 4 digitos: \n");
scanf ("%d", &n);

q1 = n / 10;
q2 = q1 / 10;
r1 = q1 % 10;
q3 = q2 / 10;
r2 = q2 % 10;

/* ex: o usuário digita 1234[n]
       1234/10[n/10] tem quociente 123[q1] e resto 4[sla]. (descarta esse resto)
       123/10[q1/10] tem quociente 12[q2] e resto 3[r1]. (usa esse resto, r1)
       12/10[q2/10] tem quociente 1[q3] resto 2[r2]. (usa esse resto, r2)
       
       sla=não usei, então nem declarei, é so para explicar oq fiz
*/

printf ("%d %d\n", r2, r1);


  system("PAUSE");	
  return 0;
}
