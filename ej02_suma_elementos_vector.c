/* Dado un vector de 10 enteros, calcula y muestra la suma total de sus elementos. */

#include <stdio.h>

int main() {
    int vector[10];
    int i;
    int suma = 0;

    for(i = 0; i < 10; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &vector[i]);
        suma += vector[i];
    }

    printf("La suma total es: %d\n", suma);

    return 0;
}
