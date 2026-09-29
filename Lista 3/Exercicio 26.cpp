#include <stdio.h>

int main() {
    int quantidade, c;
    float nota, soma = 0, media;

    scanf("%d", &quantidade);

    for (c = 1; c <= quantidade; c++) {
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / quantidade;

    printf("Media da turma: %.2f\n", media);

    return 0;
}