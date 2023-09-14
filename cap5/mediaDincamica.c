#include <stdio.h>
#include <stdlib.h>

float media(float *v, int n)
{
    int i;
    float s = 0.0f;
    for (int i = 0; i < n; i++)
    {
        s += v[i];
    }
    return s / n;
}

int main()
{
    int i, n;
    float *v;
    float med;

    scanf("%d", &n);
    v = (float *)malloc(n * sizeof(float));
    if(v == NULL){
        printf("memoria insuficiente");
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &v[i]);
    }

    med = media(v, n);
    printf("media: %f", med);
    free(v);
}
