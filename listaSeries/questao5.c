#include <stdio.h>

int dp[10000];
int dpPot[10000];
int current = 0;

int fastFact(int a)
{
    if (a == 0)
        return 1;
    if (dp[a] != 0)
        return dp[a];

    return dp[a] = a * fastFact(a - 1);
}

int intPot(int a, int n)
{
    if(n==0){
        return 1;
    }

    if (dpPot[n] != 0)
    {
        return dpPot[n];
    }

    return dpPot[n] = a * intPot(a, n - 1);
}

double serieTaylorAux(int i, int n, int a)
{
    double val = (double)intPot(a, i) / fastFact(i);
    // printf("1/%i ", i);
    if (i >= n)
    {
        return val;
    }
    return val + serieTaylorAux(i + 1, n, a);
}

double serieTaylor(int a, int b)
{
    return serieTaylorAux(0, a, b);
}

int main()
{
    int a, b;
    printf("Infome o x\n");
    scanf("%i", &b);
    printf("Informe as iteracoes\n");
    scanf("%i", &a);

    printf("%f\n", serieTaylor(a, b));
    return 0;
}