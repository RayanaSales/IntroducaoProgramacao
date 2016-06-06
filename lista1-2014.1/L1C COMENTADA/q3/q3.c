//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{ char cad;

freopen("e3.txt" , "r", stdin);
freopen("s3.txt", "w", stdout);

while (cad != '.')
{
    scanf ("%c", &cad);


    if (cad == 'T')
       printf ("A");       


       else if (cad == 'A')
            printf ("T");       


            else if (cad == 'C')
                 printf ("G");       


                 else if (cad == 'G')
                      printf ("C");       

}

fclose(stdin);
fclose(stdout);	
return 0;
}
