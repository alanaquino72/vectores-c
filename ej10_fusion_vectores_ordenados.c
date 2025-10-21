/* Dado dos vectores ordenados ascendentemente, crea un tercer vector que contenga todos los elementos en orden ascendente (sin usar funciones de librería para ordenar). */

#include <stdio.h>

int main() {
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Ingrese el tamaño del primer vector: ");
    scanf("%d", &n1);
    printf("Ingrese el tamaño del segundo vector: ");
    scanf("%d", &n2);

    int v1[n1], v2[n2], v3[n1 + n2];

    printf("Ingrese los elementos del primer vector (orden ascendente):\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Ingrese los elementos del segundo vector (orden ascendente):\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }

    i = 0; j = 0; k = 0;
    while(i < n1 && j < n2) {
        if(v1[i] < v2[j]) {
            v3[k++] = v1[i++];
        } else {
            v3[k++] = v2[j++];
        }
    }

    while(i < n1) {
        v3[k++] = v1[i++];
    }

    while(j < n2) {
        v3[k++] = v2[j++];
    }

    printf("Vector fusionado en orden ascendente:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", v3[i]);
    }

    return 0;
}
