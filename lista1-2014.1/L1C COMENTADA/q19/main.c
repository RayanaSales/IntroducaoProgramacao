#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{ 
    char votos[10][20]; //matriz
    int l=10, c=20, i, j; // variaveis do primeiro for
    int slx=0, sly=0, slz=0, slb=0, sln=0, slt=0, maior; // variaveis do segundo for
    double pvx=0, pvy=0, pvz=0, pb=0, pn=0, stx=0, sty=0, stz=0, votosvalidos=0, metadedosvotosvalidos=0; /* sl=soma de cada linha.(conta qtos x tem em cada linha, e vai somando),
                                                                                                            pv=percentual valido(guarda o percentual de votos validos p/x) */
    
    freopen("e19.txt", "r", stdin);
    freopen("s19.txt", "w", stdout);
    
    for (i=0 ; i<l ; i++) //lendo a matriz
    {
        for(j=0 ; j<c ; j++)
        {
                votos[i][j]=getchar();
                	if (isspace(votos[i][j]))
                	{
                		j -= 1; //tem 40 caracteres no total da linha,20 sao letras,20 espacos.Os espacos precisam ser ignorados, entao no j ele decrementa para ignorar o invalido e pegar o valido.
                		continue;
                	}
        }
    }            
    
    for (i=0 ; i<l ; i++) //calculando a matriz
    {                
            for(j=0 ; j<c ; j++)
            {
                if (votos[i][j] == 'X') //indentifica qtos x há em cada linha, e vai somando todas as linhas.
                   slx += 1;
                else if (votos[i][j] == 'Y')
                     sly += 1;
                else if (votos[i][j] == 'Z')
                     slz += 1;
                else if (votos[i][j] == 'B')
                     slb += 1;
                else if (votos[i][j] == 'N')
                     sln += 1;                  
            }
         
                           
    }  
	  
   slt = slx + sly + slz + sln + slb;
                
                pvx = (slx * 100.0) / slt; //regra de tres para verificar as porcentagens validas em relação a todos os votos (contando com nulos e brancos)
                pvy = (sly * 100.0) / slt;
                pvz = (slz * 100.0) / slt;
                pb = (slb * 100.0) / slt;
                pn = (sln * 100.0) / slt;                                            
                
   maior = slx; // vai ganhar quem tiver a maior qtd de votos, aq verifico quem tem essa maior qtd.
                
                      if (sly > maior)
                         printf("Vencedor: Y \n");
                      else if (slz > maior)
                           printf("Vencedor: Z \n");
                      else printf("Vencedor: X \n");
                      
                votosvalidos = (slt) - (slb + sln); 
                metadedosvotosvalidos = votosvalidos + 1;
                stx = (100.0 * slx) / votosvalidos; // para checar se havera segundo turno ou nao.
                sty = (100.0 * sly) / votosvalidos; 
                stz = (100.0 * slz) / votosvalidos;
                
                if (stx > metadedosvotosvalidos || sty > metadedosvotosvalidos || stz > metadedosvotosvalidos)
                   printf("Segundo turno: N \n");
                else if (stx < metadedosvotosvalidos || sty < metadedosvotosvalidos || stz < metadedosvotosvalidos)
                     printf("Segundo turno: S \n");
                     
                printf("X: %d %.2lf%% %.2lf%% \n", slx, pvx, stx);  
                printf("Y: %d %.2lf%% %.2lf%% \n", sly, pvy, sty); 
                printf("Z: %d %.2lf%% %.2lf%% \n", slz, pvz, stz); 
                printf("B: %d %.2lf%% \n", slb, pb);
                printf("N: %d %.2lf%% \n", sln, pn); 
   
   
   
  fclose(stdin);
  fclose(stdout);	
  
  return 0;
}
