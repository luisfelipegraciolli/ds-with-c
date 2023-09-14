#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *string){
    char *reverse;
    int tam = strlen(string);
    reverse = (char *)malloc(tam * sizeof(char));
    for (int i = 0; i < strlen(string)+1; i++)
    {
        reverse[i] = string[tam];
        tam--;
        printf("%c", reverse[i]);
    }
    
}   

int main(){
    reverse("abcde");
}
