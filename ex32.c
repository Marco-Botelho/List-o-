#include <stdio.h>

int main() {
    float celsius;

    printf("Fahrenheit  Celsius\n");

    for (int f = 50; f <= 150; f++) {
        celsius = 5.0 * (f - 32) / 9.0;
        printf("%d          %.2f\n", f, celsius);
    }

    return 0;
}
