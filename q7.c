//7. Implemente uma função que receba duas matrizes de inteiros e seus respectivos números de linhas e colunas (considerando matrizes quadradas de mesmo tamanho), e retorne a matriz resultante da multiplicação delas. No main, teste com matrizes 2x2 ou 3x3.
#include <stdio.h>
#define N 3
#define M 2

void formatacao_Matrizes(int tamanho, int matriz[tamanho][tamanho]);

void multiplicacao_Matrizes(int tamanho, int matriz2x2[tamanho][tamanho], int matriz3x3[tamanho][tamanho], int matriz_resultante[tamanho][tamanho]){
  for(int i = 0; i < tamanho; i++){
    for (int j = 0; j < tamanho; j++){
    matriz_resultante[i][j] = 0;
    }
  } 
  
  for (int i = 0; i < tamanho; i++){
     for (int j = 0; j < tamanho; j++){
       for (int k = 0; k < tamanho; k++){
        matriz_resultante[i][j] += (matriz2x2[i][k] * matriz3x3[k][j]);
       }
     }
   }
  
}

void formatacao_Matrizes(int tamanho, int matriz[tamanho][tamanho]){
  for (int i = 0; i < tamanho; i++){
    for (int j = 0; j < tamanho; j++){
      printf("%6d", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int matriz1[N][N] = {{6, 19, 8}, {36, 15, 2}, {5, 24, 32}};
  int matriz2[N][N] = {{4, 8, 12}, {3, 7, 1}, {31, 25, 2}};
  int matriz_resultado3x3[N][N];
  printf("Matriz A (%dx%d):\n", N, N);
  formatacao_Matrizes(N, matriz1);
  printf("Matriz B (%dx%d):\n", N, N);
  formatacao_Matrizes(N, matriz2);
  multiplicacao_Matrizes(N, matriz1, matriz2, matriz_resultado3x3);
  printf("Matriz resultante (%dx%d):\n", N, N);
  formatacao_Matrizes(N, matriz_resultado3x3);

  printf("\n");
  
  int matrizA[M][M] = {{7, 18}, {3, 13}};
  int matrizB[M][M] = {{37, 16}, {4, 8}};
  int matriz_resultado2x2[M][M];
  printf("Matriz A (%dx%d):\n", M, M);
  formatacao_Matrizes(M, matrizA);
  printf("Matriz B (%dx%d):\n", M, M);
  formatacao_Matrizes(M, matrizB);
  multiplicacao_Matrizes(M, matrizA, matrizB, matriz_resultado2x2);
  printf("Matriz resultante (%dx%d):\n", M, M);
  formatacao_Matrizes(M, matriz_resultado2x2);
  
return 0;
}