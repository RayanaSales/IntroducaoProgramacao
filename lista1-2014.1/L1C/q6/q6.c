//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{ int n, tn, i=1, restos=0;

freopen("e6.txt" , "r", stdin);
freopen("s6.txt", "w", stdout);


                  while (n!=0)
                  {
                              scanf ("%d", &n);
                   
                                    if (n == 0)
                                       return 0;
                         
                                    tn = (n * (n+1)) / 2;

                                         for (i=1 ; i<tn ; i++) 
                                         {
                                             if ( tn % i == 0) 
                                                restos = restos+i; 
                                         }
                                         
                                    if (tn != restos) 
                                       printf ("T%d=%d imperfeito\n",n, tn);
                                    else
                                        printf ("T%d=%d perfeito\n",n, tn);
                                        
                                        restos = 0; 
                   } 
fclose(stdin);
fclose(stdout);

  return 0;
}

