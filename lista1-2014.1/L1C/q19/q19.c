//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{ 
    char votos[10][20]; 
    int l=10, c=20, i, j; 
    int somavotos_x=0, somavotos_y=0, somavotos_z=0, somavotos_b=0, somavotos_n=0, somatotalvotos=0, maior; 
    double percentual_x=0, percentual_y=0, percentual_z=0, percentual_b=0, percentual_n=0, percentualvalido_x=0, percentualvalido_y=0, percentualvalido_z=0, votosvalidos=0, metadedosvotosvalidos=0; 
                                                                                                         
    
    freopen("e19.txt", "r", stdin);
    freopen("s19.txt", "w", stdout);
    
    for (i=0 ; i<l ; i++) 
    {
        for(j=0 ; j<c ; j++)
        {
                votos[i][j]=getchar();
                	if (isspace(votos[i][j]))
                	{
                		j -= 1; 
                		continue;
                	}
        }
    }            
    
    for (i=0 ; i<l ; i++) 
    {                
            for(j=0 ; j<c ; j++)
            {
                if (votos[i][j] == 'X') 
                   somavotos_x += 1;
                else if (votos[i][j] == 'Y')
                     somavotos_y += 1;
                else if (votos[i][j] == 'Z')
                     somavotos_z += 1;
                else if (votos[i][j] == 'B')
                     somavotos_b += 1;
                else if (votos[i][j] == 'N')
                     somavotos_n += 1;                  
            }                      
    }  
	  
   somatotalvotos = somavotos_x + somavotos_y + somavotos_z + somavotos_b + somavotos_n;
                
                percentual_x = (somavotos_x * 100.0) / somatotalvotos; 
                percentual_y = (somavotos_y * 100.0) / somatotalvotos;
                percentual_z = (somavotos_z * 100.0) / somatotalvotos;
                percentual_b = (somavotos_b * 100.0) / somatotalvotos;
                percentual_n = (somavotos_n * 100.0) / somatotalvotos;                                            
                
                maior = percentual_x; 
                      if (percentual_y > maior)
                         printf("Vencedor: Y \n");
                      else if (percentual_z > maior)
                           printf("Vencedor: Z \n");
                      else printf("Vencedor: X \n");
                      
                votosvalidos = (somatotalvotos) - (somavotos_b + somavotos_n); 
                metadedosvotosvalidos = votosvalidos + 1;
                percentualvalido_x = (100.0 * somavotos_x) / votosvalidos; 
                percentualvalido_y = (100.0 * somavotos_y) / votosvalidos; 
                percentualvalido_z = (100.0 * somavotos_z) / votosvalidos;
                
                if (somavotos_x > metadedosvotosvalidos || somavotos_y > metadedosvotosvalidos || somavotos_z > metadedosvotosvalidos)
                   printf("Segundo turno: N \n");
                else if (somavotos_x < metadedosvotosvalidos || somavotos_y < metadedosvotosvalidos || somavotos_z < metadedosvotosvalidos)
                     printf("Segundo turno: S \n");
                     
                printf("X: %d %.2lf%% %.2lf%% \n", somavotos_x, percentual_x, percentualvalido_x);  
                printf("Y: %d %.2lf%% %.2lf%% \n", somavotos_y, percentual_y, percentualvalido_y); 
                printf("Z: %d %.2lf%% %.2lf%% \n", somavotos_z, percentual_z, percentualvalido_z); 
                printf("B: %d %.2lf%% \n", somavotos_b, percentual_b);
                printf("N: %d %.2lf%% \n", somavotos_n, percentual_n); 
  
  fclose(stdin);
  fclose(stdout);	
  
  return 0;
}
