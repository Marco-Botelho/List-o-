#include <stdio.h>

int potencia(int x, int y) {
    int resultado = 1;

    for (int i = 0; i < y; i++) {
        resultado = resultado * x;
    }

    return resultado;
}

int main() {
    int x, y;

    printf("Digite a base e o expoente: ");
    scanf("%d %d", &x, &y);

    if (y < 0) {
        printf("Este programa trabalha com expoente positivo.\n");
    } else {
        printf("Resultado: %d\n", potencia(x, y));
    }

    return 0;
}
