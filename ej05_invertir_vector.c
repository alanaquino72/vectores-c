/* Lee un vector de 10 enteros e invierte su contenido (el primer elemento pasa al final, etc.) sin usar un segundo vector. */

#include <stdio.h>

int main() {
    int vector[10];
    int i, temp;

    for(i = 0; i < 10; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &vector[i]);
    }

    for(i = 0; i < 5; i++) {
        temp = vector[i];
        vector[i] = vector[9 - i];
        vector[9 - i] = temp;
    }

    printf("Vector invertido:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", vector[i]);
    }

    return 0;
}
