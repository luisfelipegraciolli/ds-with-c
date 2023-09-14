#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef union
{
    int x;
    char y;
} exemplo;



int main()
{
    exemplo *p;
    p->x = 65;
    printf("x: %d\ny: %c", p->x, p->y);
}
