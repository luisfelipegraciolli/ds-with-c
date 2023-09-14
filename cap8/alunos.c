#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100



typedef struct
{
    int matricula;
    char nome[80];
    char end[120];
    char tel[21];

} Aluno;


void incializa(int n, Aluno **tab){
    for (int i = 0; i < n; i++)
    {
        tab[i] = NULL;
    }
    
}

void preenche(int n, Aluno **tab, int i){
    // i = posição
    if (i < 0 || i >= n)
    {
        printf("Indice fora do limite do vetor\n");
        exit(1);
    }

    // Se tivermos inicializado o vetor e essa posição estiver disponivel
    if (tab[i] == NULL){
        tab[i] = (Aluno*)malloc(sizeof(Aluno)); //Alocando memoria para o aluno
    }
    printf("Entre com a matricula do aluno: ");
    scanf("%d", &tab[i]->matricula);

    printf("Entre com o nome do aluno: ");
    scanf(" %80[^\n]", tab[i]->nome);

    printf("Entre com o endereço do aluno: ");
    scanf(" %120[^\n]", tab[i]->end);

    printf("Entre com o numero de telefone do aluno: ");
    scanf(" %21[^\n]", tab[i]->tel);
    printf("\n\n");
}

void retira(int n, Aluno **tab, int i){
    if (i < 0 || i >= n)
    {
        printf("Indice fora do limite do vetor\n");
        exit(1);
    }

    if (tab[i] != NULL){ //Se estiver preenchido
        free(tab[i]);
        tab[i] == NULL;
    }
}

void imprime(int n, Aluno **tab, int i){
    if (i < 0 || i >= n)
    {
        printf("Indice fora do limite do vetor\n");
        exit(1);
    }

    if(tab[i] != NULL){
        printf("--- Aluno %d ---\n\n", i);
        printf("Matricula: %d\n", tab[i]->matricula);
        printf("Nome: %s\n", tab[i]->nome);
        printf("Endereço: %s\n", tab[i]->end);
        printf("Telefone: %s\n\n", tab[i]->tel);
    }
}

void imprimeTudo(int n, Aluno** tab){
    int i = 0;
    for (int i = 0; i < n; i++)
    {
        imprime(n, tab, i);
    }
    
}

int main()
{
    Aluno* tab[10];
    incializa(11, tab);
    preenche(10, tab, 0);
    preenche(10, tab, 1);

    imprimeTudo(10, tab);

    retira(10, tab, 0);
    retira(10, tab, 1);
}
