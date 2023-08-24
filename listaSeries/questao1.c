#include <stdio.h>

double serieHarmonicaAux(int i, int n)
{
    double val = (double)1/i;
    printf("%f ", val );
    //printf("1/%i ", i);
    if (i >= n)
    {
        printf("\n");
        return 1 / i;
    }
    return val + serieHarmonicaAux(i + 1, n);
}

double serieHarmonica(int a)
{
    return serieHarmonicaAux(1, a);
}

int main()
{
    int a;
    scanf("%i", &a);
    printf("%f\n", serieHarmonica(a));
    return 0;
}