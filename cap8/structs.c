#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
}Ponto;


typedef struct 
{
    Ponto centro;
    float raio;
} Circulo;

float distanciaPaQ(Ponto *p, Ponto *q){
    float d = sqrt((q->x - p->x) * (q->x - p->x) + (q->y - p->y) * (q->y - p->y));
    return d;
}

int interiorDoCirculo(Circulo *c, Ponto *p){
    float d = distanciaPaQ(&c->centro, p);
    return (d < c->raio);
}

int main(){
    Ponto pontoA;
    Ponto pontoB;

    pontoA.x = 10.0;
    pontoA.y = 10;

    pontoB.y = 10.0;
    pontoB.x = 20.0;

    float distancia = distanciaPaQ(&pontoA, &pontoB);
    printf("Distancia: %.3f\n", distancia);

    Circulo meuCircle;
    meuCircle.centro.x = 3.0;
    meuCircle.centro.y = 3.0;
    meuCircle.raio = 10.0;
    if(interiorDoCirculo(&meuCircle, &pontoA) == 0){
        printf("Fora do circulo");
    }else{
        printf("Dentro do circulo");
    }
}
