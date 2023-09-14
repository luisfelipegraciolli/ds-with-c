#include <stdio.h>
#include <stdlib.h>

float media(float* v, int n){
    int i;
    float s = 0.0f;
    for (int i = 0; i < n; i++)
    {
        s += v[i];
    }
    return s / n;
}


int main(){
    float v[10];
    for (int i = 0; i < 10; i++)
    {
        scanf(" %f", &v[i]);
    }
    float med = media(v, 10);
    printf("media: %f", med);
}
