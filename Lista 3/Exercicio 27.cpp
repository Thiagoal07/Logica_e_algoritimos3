#include <stdio.h>

int main() {
    int c, aprovados = 0, reprovados = 0;
    float nota, percentual;

    for (c = 1; c <= 10; c++) {
        scanf("%f", &nota);

        if (nota >= 7) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    percentual = aprovados * 100.0 / 10;

    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    printf("Percentual de aprovacao: %.2f%%\n", percentual);

    return 0;
}