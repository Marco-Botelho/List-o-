#include <stdio.h>

void fibonacci(int termos) {
    int a = 0;
    int b = 1;
    int proximo;

    for (int i = 0; i < termos; i++) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }
    printf("\n");
}

int main() {
    int termos;

    printf("Quantos termos deseja imprimir? ");
    scanf("%d", &termos);

    if (termos <= 0) {
        printf("Quantidade invalida.\n");
    } else {
        fibonacci(termos);
    }

    return 0;
}
