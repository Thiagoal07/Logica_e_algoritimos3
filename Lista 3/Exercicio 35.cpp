#include <stdio.h>

int main() {
    int quantidade, c;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
    char nome[100];
    float nota1, nota2, media;
    float somaMedias = 0, mediaGeral;
    float maiorMedia = 0, menorMedia = 0;

    scanf("%d", &quantidade);

    for (c = 1; c <= quantidade; c++) {
        getchar();
        fgets(nome, 100, stdin);

        scanf("%f", &nota1);
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        somaMedias += media;

        if (c == 1) {
            maiorMedia = media;
            menorMedia = media;
        }

        if (media > maiorMedia) {
            maiorMedia = media;
        }

        if (media < menorMedia) {
            menorMedia = media;
        }

        if (media >= 7) {
            aprovados++;
        } else if (media >= 5) {
            recuperacao++;
        } else {
            reprovados++;
        }
    }

    mediaGeral = somaMedias / quantidade;

    printf("Quantidade de alunos: %d\n", quantidade);
    printf("Aprovados: %d\n", aprovados);
    printf("Recuperacao: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);
    printf("Media geral: %.2f\n", mediaGeral);
    printf("Maior media: %.2f\n", maiorMedia);
    printf("Menor media: %.2f\n", menorMedia);

    return 0;
}s