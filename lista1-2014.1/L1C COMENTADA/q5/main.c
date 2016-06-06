//Rayana Araujo Sales 
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
   int x, n, outro, i=1;
   freopen("e5.txt" , "r", stdin);
   freopen("s5.txt", "w", stdout);

   scanf ("%d", &n);
   scanf ("%d", &x);

   while (x != 0) {
         printf ("%d: ", x);  
         for (i=x*2;i<n;i+=x) {
            
            if (i == x*2) //ele é o primeiro numero do meu for. imprime ele sem a vírgula.
            printf ("%d",i);
            else 
            printf (", %d", i); /* os outros numeros, diferente do primeiro, serão impressos com uma virgula antes,
                                       e não com uma virgula depois. Pq quando a condição do for for quebrada,
                                       o ultimo numerosera impresso assim: ... , ultimo  */
             
         }
         
         printf ("\n");
         //depois de ter calculado      
         scanf ("%d", &x);
 }
   fclose(stdin);
   fclose(stdout);
   return 0;
}
