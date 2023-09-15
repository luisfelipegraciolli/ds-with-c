#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pi(int n)
{
    double p = 0.0;
    for (int i = 0; i < n; i++)
    {
        p = p + (pow(-1.0, i) / ((2.0 * i) + 1.0));
    }
    return 4.0 * p;
}

int main()
{
    double resul = pi(1000000);
    printf("resultado: %f", resul);
}
