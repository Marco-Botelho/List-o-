#include <stdio.h>

int inverter(int n) {
    int inverso = 0;
    int sinal = 1;

    if (n < 0) {
        n = -n;
        sinal = -1;
    }

    while (n > 0) {
        inverso = inverso * 10 + n % 10;
        n = n / 10;
    }

    return inverso * sinal;
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Inverso: %d\n", inverter(n));

    return 0;
}
