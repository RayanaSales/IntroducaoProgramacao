//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned int x, n, i;
  freopen("e5.txt" , "r", stdin);
  freopen("s5.txt", "w", stdout);

                     scanf ("%u %u", &n, &x);

                                  while (x != 0)
                                  {
                                        printf ("%u: ", x);

                                               for (i=x*2 ; i<n ; i+=x)
                                               {
                                                            if (i == x*2)
                                                               printf ("%u",i);
                                                            else
                                                            printf (", %u", i);
                                               }

                                               printf ("\n");

                                        scanf ("%u", &x);
                                  }
   fclose(stdin);
   fclose(stdout);

   return 0;
}
