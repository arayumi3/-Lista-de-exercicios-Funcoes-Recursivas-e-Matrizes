//5. Escreva uma função recursiva que receba dois inteiros base e expoente e retorne base elevado ao expoente. Considere expoente ≥ 0.
#include <stdio.h>
long int potencial(int base, int expoente){
  if(expoente == 0){
    return 1;
  } else {
    return base * potencial(base, expoente - 1);
  }
}

int main(int argc, char *argv[]) {
  int base;
  int expoente;
  printf("Digite a base e o expoente: ");
  scanf("%d %d", &base, &expoente);
  if (expoente < 0){
    printf("O expoente deve ser maior ou igual a 0\n");
  } else{
    printf("A resultado da potencia e: %ld\n", potencial(base, expoente));
  }

 return 0;
}