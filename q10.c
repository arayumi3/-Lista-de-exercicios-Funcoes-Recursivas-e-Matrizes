//10. Crie uma função que recebe um vetor e seu tamanho e inverte a ordem dos elementos do vetor.

#include <stdio.h>

#define TAMANHO_TESTE_1 7
#define TAMANHO_TESTE_2 6
#define TAMANHO_TESTE_3 1
#define TAMANHO_TESTE_4 0

void formatacao_Vetor(int tamanho, int vetor[]) {
    printf("Vetor: [");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

void inverter_vetor(int vetor[], int tamanho) {
    if (tamanho <= 1) {
        return;
    }
    int inicio = 0;
    int fim = tamanho - 1;
    int temp;
    while (inicio < fim) {
        temp = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = temp;
        inicio++;
        fim--;
    }
}

int main(int argc, char *argv[]) {
    int vetor1[TAMANHO_TESTE_1] = {10, 20, 30, 40, 50, 60, 70};
    printf("Original 1:\n");
    formatacao_Vetor(TAMANHO_TESTE_1, vetor1);
    inverter_vetor(vetor1, TAMANHO_TESTE_1);
    printf("Invertido 1:\n");
    formatacao_Vetor(TAMANHO_TESTE_1, vetor1);
    printf("\n");

    int vetor2[TAMANHO_TESTE_2] = {5, 15, 25, 35, 45, 55};
    printf("Original 2:\n");
    formatacao_Vetor(TAMANHO_TESTE_2, vetor2);
    inverter_vetor(vetor2, TAMANHO_TESTE_2);
    printf("Invertido 2:\n");
    formatacao_Vetor(TAMANHO_TESTE_2, vetor2);
    printf("\n");

    int vetor3[TAMANHO_TESTE_3] = {100};
    printf("Original 3 (um elemento):\n");
    formatacao_Vetor(TAMANHO_TESTE_3, vetor3);
    inverter_vetor(vetor3, TAMANHO_TESTE_3);
    printf("Invertido 3:\n");
    formatacao_Vetor(TAMANHO_TESTE_3, vetor3);
    printf("\n");

    int vetor4[TAMANHO_TESTE_4] = {}; 
    printf("Original 4 (vazio):\n");
    formatacao_Vetor(TAMANHO_TESTE_4, vetor4);
    inverter_vetor(vetor4, TAMANHO_TESTE_4);
    printf("Invertido 4:\n");
    formatacao_Vetor(TAMANHO_TESTE_4, vetor4);
    printf("\n");

    return 0;
}