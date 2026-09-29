#include <stdio.h>

int main() {
    float raio, area;

    scanf("%f", &raio);

    area = 3.14159 * raio * raio;

    printf("Area: %.2f\n", area);

    return 0;
}