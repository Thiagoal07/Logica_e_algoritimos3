#include <stdio.h>

int main() {
    float distancia, combustivel, consumo;

    scanf("%f", &distancia);
    scanf("%f", &combustivel);

    consumo = distancia / combustivel;

    printf("Consumo medio: %.2f km/L\n", consumo);

    return 0;
}