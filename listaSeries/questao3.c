#include <stdio.h>

double serieGreLeib(int i, int n)
{
    double val = (double)4 / (2 * i - 1);

    if (i >= n)
    {
        printf("\n");
        if (i % 2 != 0)
        {
            return val;
        }
        else
        {
            return -val;
        }
    }
    if (i % 2 != 0)
    {
        return val + serieGreLeib(i + 1, n);
    }
    return -val + serieGreLeib(i + 1, n);
}

double serieNilakantha(int i, int n)
{
    int t = 2*i;
    double val = (double)4 / (t * (t - 1) * (t - 2));

    if (i >= n)
    {
        printf("\n");
        if (i % 2 == 0)
        {
            return val;
        }
        else
        {
            return -val;
        }
    }
    if (i % 2 == 0)
    {
        return val + serieNilakantha(i + 1, n);
    }
    return -val + serieNilakantha(i + 1, n);
}

double seriePi(int a, int caso)
{
    if (!caso)
    {
        return serieGreLeib(1, a);
    }
    return 3 + serieNilakantha(2, a);
}

int main()
{
    int a, caso;
    printf("Informe a serie desejada:\n (0) Gregory-Leibnitz  (1)Nilakantha\n");
    scanf("%i", &caso);
    printf("Qual o numero de termos?\n");
    scanf("%i", &a);
    printf("%f\n", seriePi(a, caso));

    return 0;
}