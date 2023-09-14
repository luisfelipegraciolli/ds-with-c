#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} Ponto;

typedef struct
{
    Ponto centro;
    float raio;
} Circulo;

float distanciaPaQ(Ponto *p, Ponto *q)
{
    float d = sqrt((q->x - p->x) * (q->x - p->x) + (q->y - p->y) * (q->y - p->y));
    return d;
}

Ponto centroGeom(int n, Ponto *v){ //Ponto *v é um vetor de pontos
    Ponto p = {0.0f, 0.0f};
    for (int i = 0; i < n; i++)
    {
        p.x += v[i].x;
        p.y += v[i].y;

    }
    p.x /= n;
    p.y /= n;
    return p;
}

int main()
{
    //Passando um quadrado
    Ponto verticesQuadrado[] = {{1.0, 1},
                                 {2.0, 1.0},
                                 {1.0, 0.0},
                                 {2.0,
                                  0.0}};

    Ponto centroQuadrado = centroGeom(4, verticesQuadrado);
    printf("centro do quadrado:\n x: %f\ny: %f", centroQuadrado.x, centroQuadrado.y);
}
