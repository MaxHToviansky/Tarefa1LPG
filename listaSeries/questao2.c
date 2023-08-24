#include <stdio.h>

double serieLNAux(int i, int n)
{
    double val = (double)1 / i;
    
    if (i >= n)
    {
        printf("\n");
        if (i % 2 != 0)
        {
            return 1 / i;
        }
        else
        {
            return -1 / i;
        }
    }
    if (i % 2 != 0)
    {
        printf("%f ", val);
        return val + serieLNAux(i + 1, n);
    }
    printf("%f ", -val);
    return -val + serieLNAux(i + 1, n);   
}

double serieLN(int a)
{
    return serieLNAux(1, a);
}

int main()
{
    int a;
    scanf("%i", &a);
    printf("%f\n", serieLN(a));
    return 0;
}