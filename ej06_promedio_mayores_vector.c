/* Dado un vector de 10 números reales, calcula el promedio y muestra cuántos elementos son mayores que este. */

#include <stdio.h>

int main() {
    float vector[10];
    int i;
    float suma = 0, promedio;
    int contador = 0;

    for(i = 0; i < 10; i++) {
        printf("Ingrese un número: ");
        scanf("%f", &vector[i]);
        suma += vector[i];
    }

    promedio = suma / 10;

    for(i = 0; i < 10; i++) {
        if(vector[i] > promedio) {
            contador++;
        }
    }

    printf("El promedio es: %.2f\n", promedio);
    printf("Cantidad de elementos mayores al promedio: %d\n", contador);

    return 0;
}
