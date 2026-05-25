#include <stdio.h>

int multiplicar(int a, int b) {
    int resultado = 0;
    int sinal = 1;

    if (a < 0) {
        a = -a;
        sinal = -sinal;
    }
    if (b < 0) {
        b = -b;
        sinal = -sinal;
    }

    for (int i = 0; i < b; i++) {
        resultado = resultado + a;
    }

    return resultado * sinal;
}

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Resultado: %d\n", multiplicar(a, b));

    return 0;
}
