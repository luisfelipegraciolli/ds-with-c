#include <stdio.h>
#include <stdlib.h>

void somaProduto(int a, int b, int *s, int *p){
    *s = a + b;
    *p = a * b;
}

int main(){
    int s;
    int p;
    somaProduto(2, 2, &s, &p);
    printf("%d, %d", s, p);
}
