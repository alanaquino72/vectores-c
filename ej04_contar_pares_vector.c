/* Ingresa 10 números enteros en un vector y cuenta cuántos de ellos son pares. */

#include <stdio.h>

int main() {
    int vector[10];
    int i;
    int contadorPares = 0;

    for(i = 0; i < 10; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &vector[i]);
    }

    for(i = 0; i < 10; i++) {
        if(vector[i] % 2 == 0) {
            contadorPares++;
        }
    }

    printf("La cantidad de números pares es: %d\n", contadorPares);

    return 0;
}
