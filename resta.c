#include <stdio.h>

int main() {
    int num1, num2, resta;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    resta = num1 - num2;

    printf("La resta es: %d\n", resta);

    return 0;
}
