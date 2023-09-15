#include <stdio.h>
#include <stdlib.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){
    if((x<=x1 && x>=x0)&&(y<=y1 && y>=y0)){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int resul = dentro_ret(3, 2, 5, 4, 6, 3);
    printf("%d", resul);
}
