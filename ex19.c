#include <stdio.h>

void imprimir_binario(int n) {
    int bits[32];
    int i = 0;

    if (n == 0) {
        printf("0\n");
        return;
    }

    while (n > 0) {
        bits[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Digite apenas numero positivo.\n");
    } else {
        imprimir_binario(n);
    }

    return 0;
}
