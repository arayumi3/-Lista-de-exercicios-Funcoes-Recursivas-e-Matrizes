//2. Escreva uma função que receba um número inteiro e retorne o seu fatorial (usando laço for). Faça um programa que peça um número ao usuário e mostre o resultado.
#include <stdio.h>
int calculoDoFatorial(int num){
    int fat = 1;
    for(int i = 1; i <= num; i++){
      fat = fat * i;
    }
     return fat;
}

int main (int argc, char * argv[]){
  int num, resultado;
    do{
     printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        if (num < 0){
        printf("Nao eh possivel fatorar um numero negativo. Tente novamente.\n");
         }
    } while (num < 0);
       resultado = calculoDoFatorial(num);
       printf("O fatorial de %d eh: %d\n", num, resultado);
         return 0;
    }