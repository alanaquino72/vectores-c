/* Implementa un programa que rote un vector de N elementos en una posición a la derecha (el último pasa al primero). */

#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    int vector[n];

    for(i = 0; i < n; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &vector[i]);
    }

    temp = vector[n - 1];
    for(i = n - 1; i > 0; i--) {
        vector[i] = vector[i - 1];
    }
    vector[0] = temp;

    printf("Vector rotado:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }

    return 0;
}
