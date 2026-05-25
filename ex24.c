#include <stdio.h>

long long fatorial(int n) {
    long long fat = 1;

    for (int i = 1; i <= n; i++) {
        fat = fat * i;
    }

    return fat;
}

long long combinacoes(int n, int r) {
    return fatorial(n) / (fatorial(r) * fatorial(n - r));
}

int main() {
    int n, r;

    printf("Digite n e r: ");
    scanf("%d %d", &n, &r);

    if (r < 0 || n < 0 || r > n) {
        printf("Valores invalidos.\n");
    } else {
        printf("Combinacoes: %lld\n", combinacoes(n, r));
    }

    return 0;
}
