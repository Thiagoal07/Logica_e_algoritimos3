#include <stdio.h>

int main() {
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0;
    int total;

    do {
        scanf("%d", &voto);

        if (voto == 1) {
            candidato1++;
        } else if (voto == 2) {
            candidato2++;
        } else if (voto == 3) {
            candidato3++;
        }

    } while (voto != 0);

    total = candidato1 + candidato2 + candidato3;

    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Total de votos: %d\n", total);

    if (candidato1 > candidato2 && candidato1 > candidato3) {
        printf("Vencedor: Candidato 1\n");
    } else if (candidato2 > candidato1 && candidato2 > candidato3) {
        printf("Vencedor: Candidato 2\n");
    } else if (candidato3 > candidato1 && candidato3 > candidato2) {
        printf("Vencedor: Candidato 3\n");
    } else {
        printf("Empate\n");
    }

    return 0;
}