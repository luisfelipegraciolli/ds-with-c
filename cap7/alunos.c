#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 50

char* duplica(char *s){
    int n = strlen(s);
    char *d = (char *)malloc((n + 1) * sizeof(char));
    strcpy(d,s);
}


char* lelinha(void){
    char linha[121];
    printf("Digite um nome: ");
    scanf(" %120[^\n]", linha);
    return duplica(linha);
}

int lenomes(char** alunos){
    int i, n;
    do
    {
        printf("Digite o numero de alunos: ");
        scanf(" %d", &n);
    } while (n>MAX);

    for (int i = 0; i < n; i++)
    {
        alunos[i] = lelinha();
    }

    return n;
}

void liberanomes(int n, char** alunos){
    int i;
    for (int i = 0; i < n; i++)
    {
        free(alunos[i]);
    }
    
}

void imprimenomes(int n, char** alunos){
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", alunos[i]);
    }
    
}

int main(int argc, char const *argv[])
{
    char *alunos[MAX];
    int n = lenomes(alunos); //retorna o numero de alunos e joga os nomes digitados pros vetores alocados com o lelinha e duplica
    imprimenomes(n, alunos);
    liberanomes(n, alunos);

    return 0;
}

