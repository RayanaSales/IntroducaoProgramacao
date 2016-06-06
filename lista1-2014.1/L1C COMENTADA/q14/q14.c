#include <stdio.h>
#include <stdlib.h>
#include "bolha.h"

int main()
{
  int i, n=20, v[20], contador=0;

  freopen("e14.txt", "r", stdin);
  freopen("s14.txt", "w", stdout);

  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5], &v[6], &v[7], &v[8], &v[9], &v[10], &v[11], &v[12], &v[13], &v[14], &v[15], &v[16], &v[17], &v[18], &v[19]);

  ordena(v, n);

          for ( i = 0 ; i < n ; i++ )
              printf("%d ", v[i]);

              printf("\n");

  fclose(stdin);
  fclose(stdout);

  return 0;
}
