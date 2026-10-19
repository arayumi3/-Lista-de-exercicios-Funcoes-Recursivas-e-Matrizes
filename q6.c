//6. Crie uma função que recebe um vetor de inteiros e seu tamanho, e retorna o maior valor presente no vetor.
#include <stdio.h>
int maior_elemento(int vetor[], int tamanho){
  if (tamanho <= 0){
    fprintf(stderr, "Tamanho do vetor invalido\n");
    return -1;
  }
  int maior = vetor[0];
  for(int i = 1; i < tamanho; i++){
    if(vetor[i] > maior){
      maior = vetor[i];
    }
  }
  return maior;
}

int main(int argc, char *argv[]) {
  int vetor[] = {3, -7, 19, 33, 112, 78, 12, 20, 1};
  printf("O maior elemento do vetor e: %d\n", maior_elemento(vetor, 9));
  
  return 0;
}