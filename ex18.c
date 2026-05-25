#include <stdio.h>

int soma_ate(int x) {
    int soma = 0;

    for (int i = 1; i <= x; i++) {
        soma = soma + i;
    }

    return soma;
}

int main() {
    int x;

    printf("Digite um numero positivo: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("O numero deve ser positivo.\n");
    } else {
        printf("Soma: %d\n", soma_ate(x));
    }

    return 0;
}
