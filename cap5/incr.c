#include <stdio.h>
#include <stdlib.h>

int increment(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        v[i] += 1;
    }
    
}

int main()
{
    int v[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
    }
    int med = increment(v, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }
    
    
}
