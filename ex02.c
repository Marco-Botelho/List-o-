#include <stdio.h>

int dividir(int a, int b) {
    int quociente = 0;
    int sinal = 1;

    if (b == 0) {
        printf("Nao existe divisao por zero.\n");
        return 0;
    }

    if (a < 0) {
        a = -a;
        sinal = -sinal;
    }
    if (b < 0) {
        b = -b;
        sinal = -sinal;
    }

    while (a >= b) {
        a = a - b;
        quociente++;
    }

    return quociente * sinal;
}

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Resultado inteiro: %d\n", dividir(a, b));

    return 0;
}
