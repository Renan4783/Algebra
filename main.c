#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int x1, y1, x2, y2, xf, yf, i, j, k;
    printf("Insira o tamanho da 1ª matriz\n");
    scanf("%d%d", &x1, &y1);
    printf("Insira o tamanho da 2ª matriz\n");
    scanf("%d%d", &x2, &y2);
    xf=x1;
    yf=y2;
    int mat1[x1][y1], mat2[x2][y2], matf[xf][yf];
    for (i=0; i<x1; i++)
    {
        for (j=0; j<y1; j++)
        {
            matf[i][j]=0;
        }
    }
    printf("Digite os valores da 1ª matriz\n");
    for (i=0; i<x1; i++)
    {
        for (j=0; j<y1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i=0; i<x1; i++)
    {
        for(j=0; j<y1; j++)
        {
            printf("%3d", mat1[i][j]);
        }
        printf("\n");
    }
    printf("Digite os valores da 2ª matriz\n");
    for (i=0; i<x2; i++)
    {
        for (j=0; j<y2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i=0; i<x2; i++)
    {
        for(j=0; j<y2; j++)
        {
            printf("%3d", mat2[i][j]);
        }
        printf("\n");
    }
    if (y1==x2)
    {
        for(i=0; i<xf; i++)
        {
            for(j=0; j<yf; j++)
            {
                for(k=0; k<xf; k++)
                {
                    matf[i][j]=matf[i][j]+(mat1[i][k]*mat2[k][j]);
            }
        }
    }
    printf("\n");
    printf("O resultado e:\n");
    printf("\n");
        for (i=0; i<xf; i++)
        {
            for(j=0; j<yf; j++)
            {
                printf("%3d", matf[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplicacao Impossivel\n");
    }
    return 0;
}

