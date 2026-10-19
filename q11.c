//11. Implemente uma função que recebe um vetor, seu tamanho e um número, e retorna 1 se o número está no vetor e 0 caso contrário.

#include <stdio.h>

#define TAMANHO_TESTE 8

int buscar_numero_no_vetor(int vetor[], int tamanho, int numero_alvo) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero_alvo) {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[]) {
    int vetor_teste[TAMANHO_TESTE] = {10, 25, 33, 48, 51, 67, 72, 89};

    int alvo1 = 33;
    int alvo2 = 99;
    int alvo3 = 10;
    int alvo4 = 89;

    int resultado1 = buscar_numero_no_vetor(vetor_teste, TAMANHO_TESTE, alvo1);
    int resultado2 = buscar_numero_no_vetor(vetor_teste, TAMANHO_TESTE, alvo2);
    int resultado3 = buscar_numero_no_vetor(vetor_teste, TAMANHO_TESTE, alvo3);
    int resultado4 = buscar_numero_no_vetor(vetor_teste, TAMANHO_TESTE, alvo4);

    printf("Buscando no vetor: {10, 25, 33, 48, 51, 67, 72, 89}\n");

    printf("O numero %d esta no vetor? Retorno: %d (%s)\n", alvo1, resultado1, resultado1 == 1 ? "Sim" : "Nao");
    printf("O numero %d esta no vetor? Retorno: %d (%s)\n", alvo2, resultado2, resultado2 == 1 ? "Sim" : "Nao");
    printf("O numero %d esta no vetor? Retorno: %d (%s)\n", alvo3, resultado3, resultado3 == 1 ? "Sim" : "Nao");
    printf("O numero %d esta no vetor? Retorno: %d (%s)\n", alvo4, resultado4, resultado4 == 1 ? "Sim" : "Nao");

    return 0;
}