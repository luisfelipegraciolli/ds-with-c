#include <stdio.h>
#include <stdlib.h>

float* transposta(int m, int n, float* mat){
    int i, j;
    float *trp;

    trp = (float*) malloc(m * n * sizeof(float));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trp[j * n + i] = mat[i * n + j];
        }
        
    }
    return trp;
}

int main(){
    float *mat;
}
