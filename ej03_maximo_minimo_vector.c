/* Lee un vector de 8 enteros e imprime el número mayor y el número menor del vector. */

#include <stdio.h>

int main() {
    int vector[8];
    int i;
    int max, min;

    for(i = 0; i < 8; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &vector[i]);
    }

    max = vector[0];
    min = vector[0];

    for(i = 1; i < 8; i++) {
        if(vector[i] > max) {
            max = vector[i];
        }
        if(vector[i] < min) {
            min = vector[i];
        }
    }

    printf("El número mayor es: %d\n", max);
    printf("El número menor es: %d\n", min);

    return 0;
}
