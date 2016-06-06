//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double seno(double x, int precisao);
double cosseno(double x, int precisao);
double tangente(double x, int precisao);

double recebeseno, recebecosseno, recebetangente;

int main()
{
    double angulo, radianos, x;
    int pontodeparada, precisao;
    
    freopen("e18.txt", "r", stdin);
    freopen("s18.txt", "w", stdout);
    
      while (angulo > 0.0)
      {
            scanf("%lf %d", &angulo, &precisao);
            
            radianos = (angulo * M_PI) / 180.0;
            
            if (angulo == 90.0 || angulo == 270.0) 
            {
                 recebeseno = seno(radianos, precisao);
                 printf("sen(%.2lf): %.4lf, ", angulo, recebeseno);
            
                 recebecosseno = cosseno(radianos, precisao);
                 printf("cos(%.2lf): %.4lf", angulo, recebecosseno);  
                 printf("\n");    
            }     
            
            else if (angulo <1)
                 break;
            
            else
            {      
                   recebeseno = seno(radianos, precisao);
                   printf("sen(%.2lf): %.4lf, ", angulo, recebeseno);
            
                   recebecosseno = cosseno(radianos, precisao);
                   printf("cos(%.2lf): %.4lf, ", angulo, recebecosseno);
            
                   recebetangente = tangente(radianos, precisao);
                   printf("tan(%.2lf): %.4lf", angulo, recebetangente);    
                   printf("\n");  
            }         
      }

  fclose(stdin);
  fclose(stdout);	
  return 0;
}

double seno(double x, int precisao) 
{
       double soma=0;       
       int i;
       
           for (i=0 ; i<precisao ; i++)
           {
               soma += ((pow(-1, i)) / (fatorial(2 * i + 1))) * pow(x, 2 * i + 1);
           }           
       return soma;       
}

double cosseno(double x, int precisao)
{
       double soma=0;       
       int j;
       
           for (j=0 ; j<precisao ; j++)
           {
               soma += ((pow(-1, j)) / (fatorial(2 * j))) * pow(x, 2 * j);
           }           
       return soma;   
}

double tangente(double x, int precisao)
{
       double resp=0;
       
       resp = recebeseno / recebecosseno;
       return resp;
}

int fatorial(int n)
{
    if(n == 0) 
         return 1;
    else
        return fatorial(n - 1) * n;
}
