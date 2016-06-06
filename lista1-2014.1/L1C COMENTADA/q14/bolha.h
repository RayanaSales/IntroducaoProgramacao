void ordena(int v[], int n)
{
     int i, j, swap;
 
          for (i = 0 ; i < ( n - 1 ); i++) // fixo. i vai oscilar de 0 ate 19.
          {
              for (j = 0 ; j < n - i - 1 ; j++) // j começa sendo 0 e vai parar qd for igual a 0 de novo.
                                               //esse j vai diminuindo a cada loop.      
                                              //qd o j chegar em 0, o vetor esta ordenado. 
              {
                  if (v[j] > v[j+1]) //a cada loop é ordenado um numero.
                  {
                     swap       = v[j];
                     v[j]   = v[j+1];
                     v[j+1] = swap;
                  }
              }
          }
}
