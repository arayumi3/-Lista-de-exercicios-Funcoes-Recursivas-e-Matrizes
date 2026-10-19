//3. Crie uma função que receba um vetor de inteiros e seu tamanho e imprima todos os elementos do vetor. Teste a função com um vetor de 5 elementos no main.

#include <stdio.h>
void vetor_tamanho(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
}

int main(int argc, char *argv[]) {
  int vetor[5] = {19, 17, 20, 33, 48};
  vetor_tamanho(vetor, 5);
  return 0;
}