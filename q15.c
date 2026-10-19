//15. Implemente uma função que receba uma matriz quadrada de inteiros, o número de linhas e colunas (iguais), e retorne 1 se a matriz for simétrica (A[i][j] == A[j][i] para todos i,j), e 0 caso contrário. Teste no main com uma matriz 3x3.

#include <stdio.h>

#define N 3

void formatacao_Matriz(int tamanho, int matriz[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%6d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int verificar_matriz_simetrica(int tamanho, int matriz[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int matriz_simetrica[N][N] = {
        {5, 1, 3},
        {1, 7, 2},
        {3, 2, 8}
    };

    int matriz_nao_simetrica[N][N] = {
        {5, 1, 3},
        {4, 7, 2},
        {8, 9, 8}
    };

    int resultado;

    printf("Teste 1: Verificando matriz simetrica\n");
    formatacao_Matriz(N, matriz_simetrica);
    resultado = verificar_matriz_simetrica(N, matriz_simetrica);
    printf("A matriz e simetrica? Retorno: %d (%s)\n\n", resultado, resultado == 1 ? "Sim" : "Nao");

    printf("Teste 2: Verificando matriz nao simetrica\n");
    formatacao_Matriz(N, matriz_nao_simetrica);
    resultado = verificar_matriz_simetrica(N, matriz_nao_simetrica);
    printf("A matriz e simetrica? Retorno: %d (%s)\n\n", resultado, resultado == 1 ? "Sim" : "Nao");

    return 0;
}