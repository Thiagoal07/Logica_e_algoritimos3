#include <stdio.h>

int main() {
    float base, altura, area;

    scanf("%f", &base);
    scanf("%f", &altura);

    area = base * altura;

    printf("Area: %.2f\n", area);

    return 0;
}