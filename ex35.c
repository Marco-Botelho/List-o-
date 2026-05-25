#include <stdio.h>

int meu_strlen(char texto[]) {
    int tamanho = 0;

    while (texto[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;
}

int meu_strcmp(char a[], char b[]) {
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return 0;
        }
        i++;
    }

    if (a[i] == '\0' && b[i] == '\0') {
        return 1;
    }

    return 0;
}

void meu_strcat(char destino[], char origem[]) {
    int i = 0;
    int j = 0;

    while (destino[i] != '\0') {
        i++;
    }

    while (origem[j] != '\0') {
        destino[i] = origem[j];
        i++;
        j++;
    }

    destino[i] = '\0';
}

int main() {
    char a[200], b[100];

    printf("Digite a primeira string: ");
    fgets(a, 200, stdin);

    printf("Digite a segunda string: ");
    fgets(b, 100, stdin);

    printf("Tamanho da primeira: %d\n", meu_strlen(a));

    if (meu_strcmp(a, b)) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    meu_strcat(a, b);
    printf("Concatenado: %s\n", a);

    return 0;
}
