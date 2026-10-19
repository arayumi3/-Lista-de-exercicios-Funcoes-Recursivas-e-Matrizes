//13. Implemente uma função recursiva que receba dois números inteiros e retorne o máximo divisor comum entre eles, usando o algoritmo de Euclides.

#include <stdio.h>
#include <stdlib.h>

int mdc_recursivo_privado(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc_recursivo_privado(b, a % b);
    }
}

int maximo_divisor_comum(int a, int b) {
    return mdc_recursivo_privado(abs(a), abs(b));
}

int main(int argc, char *argv[]) {
    int num1 = 48;
    int num2 = 18;
    int resultado;

    resultado = maximo_divisor_comum(num1, num2);
    printf("O MDC de %d e %d e: %d\n", num1, num2, resultado);

    int num9 = -60;
    int num10 = -48;
    resultado = maximo_divisor_comum(num9, num10);
    printf("O MDC de %d e %d e: %d\n", num9, num10, resultado);

    return 0;
}