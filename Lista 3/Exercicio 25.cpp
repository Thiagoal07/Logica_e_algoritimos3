#include <stdio.h>

int main() {
    int n, c, soma = 0;

    scanf("%d", &n);

    for (c = 1; c <= n; c++) {
        soma += c;
    }

    printf("%d\n", soma);

    return 0;
}