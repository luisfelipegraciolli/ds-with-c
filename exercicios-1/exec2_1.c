#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta = (b * b) - (4 * a * c);

    if(delta < 0){
        return 0;
    }else if(delta == 0 ){
        return 1;
    }else{
        
        *x1 = (-(b) + sqrt(delta)) / (2 * a);
        *x2 = (-(b) - sqrt(delta)) / (2 * a);
        return 2;
    }

}

int main()
{
    float a = -121.0f;
    float b = 233.0f;
    float c = 15347.0f;
    float x1=0.0, x2=0.0;
    int solucoes = raizes(a, b, c, &x1, &x2);
    printf("Essa equacao tem %d solucoes\n", solucoes);
    printf("x' = %.3f\nx'' = %.3f", x1, x2);
}
