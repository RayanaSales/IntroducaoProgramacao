//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>

int main()
{ char basenitrog;

freopen("e3.txt" , "r", stdin);
freopen("s3.txt", "w", stdout);

while (basenitrog != '.')
{
    scanf ("%c", &basenitrog);

    if (basenitrog == 'T')
       printf ("A");


       else if (basenitrog == 'A')
            printf ("T");


            else if (basenitrog == 'C')
                 printf ("G");


                 else if (basenitrog == 'G')
                      printf ("C");

}

fclose(stdin);
fclose(stdout);

return 0;
}
