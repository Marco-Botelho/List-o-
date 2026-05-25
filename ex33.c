#include <stdio.h>

void imprimir_divisores(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Digite um numero positivo.\n");
    } else {
        imprimir_divisores(n);
    }

    return 0;
}
