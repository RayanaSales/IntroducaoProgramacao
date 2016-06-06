//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ int n, r, v[10], soma=0, i=0, j=0, k=0;

freopen("e13.txt", "r", stdin);
freopen("s13.txt", "w", stdout);

scanf("%d", &n);
srand( (unsigned)time(NULL) );

            for (i=0 ; i<n ; i++)
            {                   
                               for (j=0 ; j<10 ; j++)
                               {
                                        r = 1 + ( rand() % 100 );
                                        soma += r;   
                                        v[j]=r;
                               }
                               
                               printf("%d = ", soma);
                               
                                               for (k=0; k<10 ; k++)
                                               {
                                                         if(k==9)
                                                                 printf("%d", v[k]);
                                                         else
                                                                 printf("%d + ", v[k]);   
                                                          
                                               }
                               printf("\n");
            }
  
fclose(stdin);
fclose(stdout);	
  return 0;
}
