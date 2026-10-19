//Escreva uma função que receba dois inteiros como parâmetros e retorne a soma deles. Faça um programa (main) para testar a função
#include <stdio.h>

int soma (int a, int b){
    return a + b;
}

int main (int argc, char * argv[]){
  int a = 13;
  int b = 27;
  printf("A soma de %d e %d e: %d\n", a, b, soma(a, b));
       return 0;
}