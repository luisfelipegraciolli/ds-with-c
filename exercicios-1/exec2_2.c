#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc_esfera(float r, float *area, float *volume){

    //area = 4r²
    //volume 4r³/3
    *area = 4 * (r * r);
    *volume = (4 * (r * r * r)) / 3;
}

int main(){
    float raio = 5.0f;
    float area;
    float volume;

    calc_esfera(raio, &area, &volume);
    printf("Esfera de raio: %f\narea da superficie: %f\nvolume: %f", raio, area, volume);
}
