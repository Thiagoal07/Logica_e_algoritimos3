#include <stdio.h>

int main() {
    float n1, n2, media;

    scanf("%f %f", &n1, &n2);

    media = (n1 + n2) / 2;

    printf("Media: %.2f\n", media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 5) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}