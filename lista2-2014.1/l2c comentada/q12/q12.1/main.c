//Rayana Araujo Sales
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void ceil(double resp , double num)
{
	resp = ceil(num);

	printf("%lf", resp);
}

void fabs(double resp, double num)
{
	resp = fabs(num);

	printf("%.1lf", resp);
}

void ceil(double resp, double num)
{
	resp = ceil(num);

	printf("%.1lf", resp);
}

void floor(double resp, double num)
{
	resp = floor(num);

	printf("%.1lf", resp);
}

void cos(double resp, double num)
{
	resp = cos(num);

	printf("%.1lf", resp);
}

void sin(double resp, double num)
{
	resp = sin(num);

	printf("%.1lf", resp);
}

void tan(double resp, double num)
{
	resp = tan(num);

	printf("%.1lf", resp);
}

void acos(double resp, double num)
{
	resp = acos(num);

	printf("%.1lf", resp);
}

void asin(double resp, double num)
{
	resp = asin(num);

	printf("%.1lf", resp);
}

void atan(double resp, double num)
{
	resp = atan(num);

	printf("%.1lf", resp);
}

void exp (double resp, double num)
{
	resp = exp(num);

	printf("%.1lf", resp);
}

void log(double resp, double num)
{
	resp = log(num);

	printf("%.1lf", resp);
}

void log10(double resp, double num)
{
	resp = log10(num);

	printf("%.1lf", resp);
}

void sqrt(double resp, double num)
{
	resp = sqrt(num);

	printf("%.1lf", resp);
}

int main()
{
	double *num, *resp;
	char letra;
	void(*vetor[]) (double**) = { ceil, fabs, floor, cos, sin, tan, acos, asin, atan, exp, log, log10, sqrt };
	char a = '0', b = '1', c = '2', d = '3', e = '4', f = '5', g = '6', h = '7', i = '8', j = '9', k = '10', l = '11', m = '12';

	while (letra != '\n' || num != '\n')
	{
		scanf("%c %lf", &letra, &(*num));
		vetor[letra] = &resp;
	}

	system("PAUSE");
	return 0;
}
