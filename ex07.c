#include <ctype.h>
#include <stdio.h>
#include <string.h>

int palindromo(char texto[]) {
    int i = 0;
    int j = strlen(texto) - 1;

    while (i < j) {
        while (i < j && !isalnum((unsigned char)texto[i])) {
            i++;
        }
        while (i < j && !isalnum((unsigned char)texto[j])) {
            j--;
        }

        if (tolower((unsigned char)texto[i]) != tolower((unsigned char)texto[j])) {
            return 0;
        }

        i++;
        j--;
    }

    return 1;
}

int main() {
    char texto[200];

    printf("Digite uma palavra ou frase: ");
    fgets(texto, 200, stdin);

    if (palindromo(texto)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
