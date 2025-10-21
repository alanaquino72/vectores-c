/* Crea un programa que lea 5 números enteros y los muestre en el mismo orden. */

#include <stdio.h>

int main() {
    int vector[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &vector[i]);
    }

    printf("Los números ingresados son:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", vector[i]);
    }

    return 0;
}
