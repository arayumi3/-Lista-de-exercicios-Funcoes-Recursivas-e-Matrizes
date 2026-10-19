//8. Escreva uma função que receba uma matriz de inteiros, o número de linhas e o número de colunas, e retorne a soma de todos os seus elementos. Teste no main com uma matriz 3x3.
#include <stdio.h>

#define LINHAS_TESTE 3
#define COLUNAS_TESTE 3

int soma_elementos_matriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    int soma = 0;
    if (linhas <= 0 || colunas <= 0) {
        return 0;
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main(int argc, char *argv[]) {
    int matriz_teste[LINHAS_TESTE][COLUNAS_TESTE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int resultado_soma;

    resultado_soma = soma_elementos_matriz(LINHAS_TESTE, COLUNAS_TESTE, matriz_teste);

    printf("A soma de todos os elementos da matriz 3x3 e: %d\n", resultado_soma);

    int matriz_vazia[0][0];
    int soma_vazia = soma_elementos_matriz(0, 0, matriz_vazia);
    printf("A soma de uma matriz vazia (0x0) e: %d\n", soma_vazia);

    int matriz_2x1[2][1] = {{10}, {20}};
    int soma_2x1 = soma_elementos_matriz(2, 1, matriz_2x1);
    printf("A soma de uma matriz 2x1 e: %d\n", soma_2x1);

    return 0;
}