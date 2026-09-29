#include <stdio.h>

int main() {
    int numero, maior, c;

    scanf("%d", &maior);

    for (c = 2; c <= 10; c++) {
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("Maior numero: %d\n", maior);

    return 0;
}