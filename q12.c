//12. Implemente uma função que recebe uma matriz de inteiros, o número de linhas e colunas, e retorna um vetor onde cada elemento é a soma dos valores da respectiva linha. Teste no main com uma matriz 3x3.

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void formatacao_Vetor(int tamanho, int vetor[]) {
    printf("Vetor de somas: [");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

void soma_linhas_matriz(int linhas, int colunas, int matriz[linhas][colunas], int vetor_somas[linhas]) {
    for (int i = 0; i < linhas; i++) {
        int soma_da_linha = 0;
        for (int j = 0; j < colunas; j++) {
            soma_da_linha += matriz[i][j];
        }
        vetor_somas[i] = soma_da_linha;
    }
}

int main(int argc, char *argv[]) {
    int matriz_teste[LINHAS][COLUNAS] = {
        {10, 20, 30},
        {4, 5, 6},
        {70, 80, 90}
    };
    int vetor_resultado[LINHAS];

    printf("Matriz de entrada (%dx%d):\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%4d", matriz_teste[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    soma_linhas_matriz(LINHAS, COLUNAS, matriz_teste, vetor_resultado);

    formatacao_Vetor(LINHAS, vetor_resultado);

    return 0;
}