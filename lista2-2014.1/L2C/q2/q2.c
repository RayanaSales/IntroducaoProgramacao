//Rayana Araujo Sales
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n, matriz[4][4], i, j, k, m;
    int teste = 0;
    char nome[2];

    freopen("e2.txt", "r", stdin);
    freopen("s2.txt", "w", stdout);

    scanf("%d", &n);

    for (k=0 ; k<n ; k++)
    {
        for (m=0 ; m<2 ; m++)
        {
            nome[m] = getchar();
            if (isspace (nome[m]))
                m--;
        }


        for (i=0 ; i<4 ; i++)
        {
            for (j=0 ; j<4 ; j++)
            {
                scanf("%d ", &matriz[i][j]);
            }
        }

        for (i=0 ; i<4 ; i++)
        {
            for (j=0 ; j<4 ; j++)
            {
                if (matriz[0][1] == (matriz[0][0] + 1))
                {
                    if (matriz[0][2] == (matriz[0][1]+1))
                    {
                        if (matriz[0][3] == (matriz[0][2]+1))
                        {
                            if (matriz[1][3] == (matriz[0][3]+1))
                            {
                                if (matriz[2][3] == (matriz[1][3]+1))
                                {
                                    if (matriz[3][3] == (matriz[2][3]+1))
                                    {
                                        if (matriz[3][2] == (matriz[3][3]+1))
                                        {
                                            if (matriz[3][1] == (matriz[3][2]+1))
                                            {
                                                if (matriz[3][0] == (matriz[3][1]+1))
                                                {
                                                    if (matriz[2][0] == (matriz[3][0]+1))
                                                    {
                                                        if (matriz[1][0] == (matriz[2][0]+1))
                                                        {
                                                            if (matriz[1][1] == (matriz[1][0]+1))
                                                            {
                                                                if (matriz[1][2] == (matriz[1][1]+1))
                                                                {
                                                                    if (matriz[2][2] == (matriz[1][2]+1))
                                                                    {
                                                                        if (matriz[2][1] == (matriz[2][2]+1))
                                                                        {
                                                                            teste = 1;
                                                                        }

                                                                        else
                                                                            teste = 0;
                                                                        break;

                                                                    }

                                                                    else
                                                                        teste = 0;
                                                                    break;

                                                                }

                                                                else
                                                                    teste = 0;
                                                                break;

                                                            }

                                                            else
                                                                teste = 0;
                                                            break;

                                                        }

                                                        else
                                                            teste = 0;
                                                        break;

                                                    }

                                                    else
                                                        teste = 0;
                                                    break;

                                                }

                                                else
                                                    teste = 0;
                                                break;

                                            }

                                            else
                                                teste = 0;
                                            break;

                                        }

                                        else
                                            teste = 0;
                                        break;

                                    }

                                    else
                                        teste = 0;
                                    break;

                                }

                                else
                                    teste = 0;
                                break;

                            }

                            else
                                teste = 0;
                            break;

                        }

                        else
                            teste = 0;
                        break;

                    }

                    else
                        teste = 0;
                    break;

                }

                else
                    teste = 0;
                break;

            }
        }

        if (teste == 1)
        {
            printf("%c%c: inca\n", nome[0], nome[1]);
        }

        else if (teste == 0)
        {
            printf("%c%c: nao inca\n", nome[0], nome[1]);
        }


    }
    fclose(stdin);
    fclose(stdout);

    return 0;
}
