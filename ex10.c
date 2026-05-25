#include <stdio.h>

int eh_primo(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int contar_primos(int x, int y) {
    int quantidade = 0;

    for (int i = x; i <= y; i++) {
        if (eh_primo(i)) {
            quantidade++;
        }
    }

    return quantidade;
}

int main() {
    int x, y;

    printf("Digite x e y (x < y): ");
    scanf("%d %d", &x, &y);

    printf("Quantidade de primos: %d\n", contar_primos(x, y));

    return 0;
}
