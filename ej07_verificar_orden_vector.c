/* Escribe un programa que determine si un vector de 10 enteros está ordenado de forma ascendente. */

#include <stdio.h>

int main() {
    int vector[10];
    int i;
    int ordenado = 1;

    for(i = 0; i < 10; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &vector[i]);
    }

    for(i = 0; i < 9; i++) {
        if(vector[i] > vector[i + 1]) {
            ordenado = 0;
            break;
        }
    }

    if(ordenado) {
        printf("El vector está ordenado de forma ascendente.\n");
    } else {
        printf("El vector no está ordenado de forma ascendente.\n");
    }

    return 0;
}
