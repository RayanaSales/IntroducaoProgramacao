//Rayana Araujo Sales
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double fazNada(double n)
{
    return n;
}

double converteGrausParaRadianos(double n)
{
    double radianos;

    radianos = (n * M_PI) / 180.0;

    return radianos;
}

int main()
{
    double n, resp;
    char letra = 'a', barran;
    double (*vetor[]) (double) = { ceil, fabs, floor, cos, sin, tan, acos, asin, atan, exp, log, log10, sqrt };
    double (*vetor1[]) (double) = { fazNada, fazNada, fazNada, converteGrausParaRadianos, converteGrausParaRadianos, converteGrausParaRadianos, fazNada, fazNada, fazNada, fazNada, fazNada, fazNada, fazNada };
    int letra_int=0, s=0;

    freopen("e12.txt", "r", stdin);
    freopen("s12.txt", "w", stdout);

    while (letra != 's')
    {
        scanf("%c", &letra);

        if (letra > 109 || letra < 97)
            continue;

        scanf("%lf",  &n);

        scanf("%c", &barran);

        letra_int = (int)letra;

        s =  letra_int - 97;

        n = vetor1[s](n);

        resp = vetor[s](n);

        printf("%.2lf\n", resp);

        letra_int = 0;
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}
