/* Dado un vector de 10 enteros, detecta los valores duplicados y reemplaza las repeticiones por -1, dejando la primera aparición intacta. */

#include <stdio.h>

int main() {
    int vector[10];
    int i, j;

    for(i = 0; i < 10; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &vector[i]);
    }

    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(vector[i] == vector[j]) {
                vector[j] = -1;
            }
        }
    }

    printf("Vector modificado:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", vector[i]);
    }

    return 0;
}
