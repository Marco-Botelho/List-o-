#include <stdio.h>

long long fatorial(int n) {
    long long fat = 1;

    for (int i = 1; i <= n; i++) {
        fat = fat * i;
    }

    return fat;
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        printf("Fatorial: %lld\n", fatorial(n));
    }

    return 0;
}
