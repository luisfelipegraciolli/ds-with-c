#include <stdio.h>
#include <stdlib.h>

int troca()
{
    static int a = 1;
    printf("%d\n", a);
    a++;

}
int main()
{
    troca();
    troca();
    troca();
}
