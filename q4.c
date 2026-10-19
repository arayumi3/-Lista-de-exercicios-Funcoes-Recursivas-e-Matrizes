//4. Implemente uma função que recebe uma matriz de inteiros, o número de linhas e o número de colunas, e retorna a média dos valores contidos nela. No main, teste a função com uma matriz 2x2 e 3x3.
#include <stdio.h>
double media_matriz(int matriz[][10], int linhas, int colunas){
    int soma = 0;
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            soma += matriz[i][j];
        }
    }
    return (double)soma / (linhas * colunas);
}

int main (int argc, char *argv[]){
    int matriz2x2[2][10] = {{2, 3}, {10, 29}};
    printf("Matriz 2x2:\n");
    for (int i = 0; i < 2; i++){
      for (int j = 0; j < 2; j++){
      printf("%4d", matriz2x2[i][j]);
      }
      printf("\n");
    }
    double media1 = media_matriz(matriz2x2, 2, 2);
    printf("A media da matriz e: %.2f\n", media1);

    int matriz3x3[3][10] = {{1, 2, 3}, {10, 13, 17}, {22, 27, 29}};
    printf("\nMatriz 3x3:\n");
    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
      printf("%5d", matriz3x3[i][j]);
      }
      printf("\n");
    }
    double media2 = media_matriz(matriz3x3, 3, 3);
    printf("A media da matriz e: %.2f\n", media2);
    
  return 0;
}