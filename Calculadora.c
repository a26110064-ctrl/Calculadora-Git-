#include <stdio.h>

float Number1, Number2, Result;
int Option;

int main()
{
    printf("Bienvenido a Calculadora\n");

    printf("Ingrese el primer valor: ");
    scanf(" %f", &Number1);

    printf("\nIngrese el segundo valor: ");
    scanf(" %f", &Number2);

    printf("\nSus valores son: %f y %f\n", Number1, Number2);
    printf("Seleccione la operacion a realizar:\n");
    printf("1. Suma.\n2. Resta.\n3. Multiplicacion.\n4. Division.\n");
    scanf(" %d", &Option);

    switch (Option)
    {    case 1:
        Result = Number1 + Number2;
        printf("\nEl resultado de la suma es: %f\n", Result);
        break;
    case 2:
        Result = Number1 - Number2;
        printf("\nEl resultado de la resta es: %f\n", Result);
        break;
    case 3:
        Result = Number1 * Number2;
        printf("\nEl resultado de la multiplicacion es: %f\n", Result);
        break;
    case 4:
        if (Number2 != 0) {
            Result = Number1 / Number2;
            printf("\nEl resultado de la division es: %f\n", Result);
        } 
        else 
        {
            printf("\nError: No se puede dividir por cero.\n");
        }   
        break;  
    }
}