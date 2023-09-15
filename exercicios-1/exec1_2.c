#include <stdio.h>
#include <stdlib.h>

int primo(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0){
            count++;
        }
    }

    if(count==2){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int resul = primo(9);
    printf("resultado: %d", resul);
}
