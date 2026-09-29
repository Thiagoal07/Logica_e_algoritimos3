#include <stdio.h>

int main() {
    char nome[100];

    printf("Digite seu nome: ");
    fgets(nome, 100, stdin);

    printf("Ola, %sSeja bem-vindo(a) a disciplina de Logica de Programacao.\n", nome);

    return 0;
}