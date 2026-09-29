#include <stdio.h>

int main() {
    int opcao;
    float saldo, valor;

    scanf("%f", &saldo);

    do {
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo: %.2f\n", saldo);
                break;

            case 2:
                scanf("%f", &valor);
                saldo += valor;
                printf("Deposito realizado.\n");
                break;

            case 3:
                scanf("%f", &valor);

                if (valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado.\n");
                } else {
                    printf("Saldo insuficiente.\n");
                }
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 4);

    return 0;
}