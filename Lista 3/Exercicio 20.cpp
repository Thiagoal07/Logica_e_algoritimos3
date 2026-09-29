#include <stdio.h>

int main() {
    float n1, n2, resultado;
    char operacao;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf(" %c", &operacao);

    if (operacao == '+') {
        resultado = n1 + n2;
        printf("%.2f\n", resultado);
    } else if (operacao == '-') {
        resultado = n1 - n2;
        printf("%.2f\n", resultado);
    } else if (operacao == '*') {
        resultado = n1 * n2;
        printf("%.2f\n", resultado);
    } else if (operacao == '/') {
        if (n2 != 0) {
            resultado = n1 / n2;
            printf("%.2f\n", resultado);
        } else {
            printf("Nao e possivel dividir por zero.\n");
        }
    } else {
        printf("Operacao invalida.\n");
    }

    return 0;
}