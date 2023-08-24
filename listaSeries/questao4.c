#include <stdio.h>

int dp[10000] = {0};

int fastFact(int a)
{
    if (a == 0)
        return 1;
    if (dp[a] != 0)
        return dp[a];

    return a * fastFact(a - 1);
}

double serieEulerAux(int i, int n)
{
    double val = (double)1 / fastFact(i);
    printf("%f ", val);
    // printf("1/%i ", i);
    if (i >= n)
    {
        printf("\n");
        return 1 / i;
    }
    return val + serieEulerAux(i + 1, n);
}

double serieEuler(int a)
{
    return serieEulerAux(0, a);
}

int main()
{
    int a;
    scanf("%i", &a);
    printf("%f\n", serieEuler(a));
    return 0;
}