//14. Escreva uma função que receba uma matriz quadrada de inteiros, o número de linhas e colunas (iguais), e altere a matriz para sua transposta (trocar linhas por colunas). Teste no main com uma matriz 3x3.

#include <stdio.h>

#define TAMANHO_N 3

void formatacao_Matriz(int tamanho, int matriz[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%6d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void matriz_transposta(int tamanho, int matriz[tamanho][tamanho]) {
    int temp;
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
}

int main(int argc, char *argv[]) {
    int matriz_teste[TAMANHO_N][TAMANHO_N] = {
        {10, 20, 30},
        {41, 51, 61},
        {72, 82, 92}
    };

    printf("Matriz Original (%dx%d):\n", TAMANHO_N, TAMANHO_N);
    formatacao_Matriz(TAMANHO_N, matriz_teste);

    matriz_transposta(TAMANHO_N, matriz_teste);

    printf("Matriz Transposta (%dx%d):\n", TAMANHO_N, TAMANHO_N);
    formatacao_Matriz(TAMANHO_N, matriz_teste);

    return 0;
}