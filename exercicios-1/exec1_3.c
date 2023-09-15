#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if(n==1 || n==0){
        return 1;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int resul = fibonacci(50);
    printf("resultado: %d", resul);
}
