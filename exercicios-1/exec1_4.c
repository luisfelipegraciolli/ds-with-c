#include <stdio.h>
#include <stdlib.h>

int soma_impares(int n)
{
    int soma = 0;


    for (int i = 0; i < n*2; i++)
    {
        if((i % 2) != 0){
            soma = soma + i;
        }
    }

    return soma;
}

int main()
{
    int resul = soma_impares(3);
    printf("resultado: %d", resul);
}
