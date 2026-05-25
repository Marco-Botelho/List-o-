#include <stdio.h>

void imprimir_resto_13(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i % 13 == 5) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int x, y;

    printf("Digite x e y (x < y): ");
    scanf("%d %d", &x, &y);

    imprimir_resto_13(x, y);

    return 0;
}
