#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>

int tabuleiro[12][12] =
{
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};

int retornaPL(char letra)
{
    if (letra == 'a') return 1;
    else if (letra == 'b') return 2;
    else if (letra == 'c') return 3;
    else if (letra == 'd') return 4;
    else if (letra == 'e') return 5;
    else if (letra == 'f') return 6;
    else if (letra == 'g') return 7;
    else if (letra == 'h') return 8;
    return 0;
}

void atualizaN(int *x, int num)
{
    if (num == 8) (*x) = num - 7;
    else if (num == 7) (*x) = num - 5;
    else if (num == 6) (*x) = num - 3;
    else if (num == 5) (*x) = num - 1;
    else if (num == 4) (*x) = num + 1;
    else if (num == 3) (*x) = num + 3;
    else if (num == 2) (*x) = num + 5;
    else if (num == 1) (*x) = num + 7;
}

void zeraTab()
{
    int i, j;
    for (i = 0; i <= 8; i++)
    {
        for (j = 0; j <= 8; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }
}

void imprimeTab()
{
    int i, j;
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            printf("%3d", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int z, i, nlc, nc, np, qtdmov;
    char lc, lp;
    int *p;
    int nlp;

    for (z = 1;; z++)
    {
        qtdmov = 0;
        scanf("%d%c", &nc, &lc);
        if (nc == 0) break;
        else
        {
            p = &nc;
            atualizaN(p, nc);
            nlc = retornaPL(lc);
            tabuleiro[nc][nlc] = 1;
            //imprimeTab();
            //getch();
            for (i = 0; i < 8; i++)
            {
                scanf("%d%c", &np, &lp);
                p = &np;
                atualizaN(p, np);
                nlp = retornaPL(lp);
                tabuleiro[np + 1][nlp - 1] = -1;
                tabuleiro[np + 1][nlp + 1] = -1;
                //imprimeTab();
                //getch();
            }
            //imprimeTab();
            if (((nc - 2) > 0 && (nc - 2) < 9) && ((nlc + 1) > 0 && (nlc + 1) < 9))
            {
                if (tabuleiro[nc - 2][nlc + 1] != -1) qtdmov++; //1
            }
            if (((nc - 2) > 0 && (nc - 2) < 9) && ((nlc - 1) > 0 && (nlc - 1) < 9))
            {
                if (tabuleiro[nc - 2][nlc - 1] != -1) qtdmov++; //2
            }
            if (((nc - 1) > 0 && (nc - 1) < 9) && ((nlc - 2) > 0 && (nlc - 2) < 9))
            {
                if (tabuleiro[nc - 1][nlc - 2] != -1) qtdmov++; //3
            }
            if (((nc + 1) > 0 && (nc + 1) < 9) && ((nlc - 2) > 0 && (nlc - 2) < 9))
            {
                if (tabuleiro[nc + 1][nlc - 2] != -1) qtdmov++; //4
            }
            if (((nc + 2) > 0 && (nc + 2) < 9) && ((nlc - 1) > 0 && (nlc - 1) < 9))
            {
                if (tabuleiro[nc + 2][nlc - 1] != -1) qtdmov++; //5
            }
            if (((nc + 2) > 0 && (nc + 2) < 9) && ((nlc + 1) > 0 && (nlc + 1) < 9))
            {
                if (tabuleiro[nc + 2][nlc + 1] != -1) qtdmov++; //6
            }
            if (((nc + 1) > 0 && (nc + 1) < 9) && ((nlc + 2) > 0 && (nlc + 2) < 9))
            {
                if (tabuleiro[nc + 1][nlc + 2] != -1) qtdmov++; //7
            }
            if (((nc - 1) > 0 && (nc - 1) < 9) && ((nlc + 2) > 0 && (nlc + 2) < 9))
            {
                if (tabuleiro[nc - 1][nlc + 2] != -1) qtdmov++; //8
            }

            printf("Caso de Teste #%d: %d movimento(s).\n", z, qtdmov);
            zeraTab();
        }

    }
    return 0;
}