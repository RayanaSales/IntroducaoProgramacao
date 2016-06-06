void ordena(int v[], int n)
{
     int i, j, troca;
 
          for (i = 0 ; i < ( n - 1 ); i++) 
          {
              for (j = 0 ; j < n - i - 1; j++)                                
              {
                  if (v[j] > v[j+1]) 
                  {
                     troca   = v[j];
                     v[j]   = v[j+1];
                     v[j+1] = troca;
                  }
              }
          }
}
