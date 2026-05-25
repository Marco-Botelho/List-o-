#include <stdio.h>

int menor_quadrado_maior(int valor) {
    int n = 1;

    while (n * n <= valor) {
        n++;
    }

    return n;
}

int main() {
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    printf("Resposta: %d\n", menor_quadrado_maior(valor));

    return 0;
}
