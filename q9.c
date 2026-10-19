//9. Implemente uma função recursiva que receba um inteiro n e retorne o n-ésimo número da sequência de Fibonacci (considere Fibonacci(0)=0, Fibonacci(1)=1).

#include <stdio.h>

int fibonacci_recursivo(int n) {
    if (n < 0) {
        fprintf(stderr, "Entrada invalida para Fibonacci: n nao pode ser negativo.\n");
        return -1; 
    }
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
}

int main(int argc, char *argv[]) {
    int n0 = 0;
    int n1 = 1;
    int n2 = 2;
    int n3 = 7;
    int n4 = 10;
    int n_negativo = -5;
    int resultado;

    resultado = fibonacci_recursivo(n0);
    printf("Fibonacci(%d) = %d\n", n0, resultado);

    resultado = fibonacci_recursivo(n1);
    printf("Fibonacci(%d) = %d\n", n1, resultado);

    resultado = fibonacci_recursivo(n2);
    printf("Fibonacci(%d) = %d\n", n2, resultado);

    resultado = fibonacci_recursivo(n3);
    printf("Fibonacci(%d) = %d\n", n3, resultado);

    resultado = fibonacci_recursivo(n4);
    printf("Fibonacci(%d) = %d\n", n4, resultado);

    printf("Testando com entrada negativa:\n");
    resultado = fibonacci_recursivo(n_negativo);
    if (resultado == -1) {
        printf("Fibonacci(%d) = Erro (conforme esperado para entrada negativa)\n", n_negativo);
    }

    return 0;
}