#include <stdio.h>

int main() {
    int numero, c;

    scanf("%d", &numero);

    for (c = 1; c <= 10; c++) {
        printf("%d x %d = %d\n", numero, c, numero * c);
    }

    return 0;
}