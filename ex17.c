#include <stdio.h>

void imprimir_romano(int n) {
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    if (n <= 0 || n > 3999) {
        printf("Numero fora do intervalo.\n");
        return;
    }

    for (int i = 0; i < 13; i++) {
        while (n >= valores[i]) {
            printf("%s", romanos[i]);
            n = n - valores[i];
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    imprimir_romano(n);

    return 0;
}
