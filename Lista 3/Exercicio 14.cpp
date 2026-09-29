#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        printf("Maior: %d\n", n1);
    } else {
        printf("Maior: %d\n", n2);
    }

    return 0;
}