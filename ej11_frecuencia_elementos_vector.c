/* Dado un vector de N enteros, muestra cuántas veces aparece cada número distinto usando otro vector auxiliar. */

#include <stdio.h>

int main() {
    int n, i, j;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    int vector[n], frecuencia[n];

    for(i = 0; i < n; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &vector[i]);
        frecuencia[i] = -1;
    }

    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i + 1; j < n; j++) {
            if(vector[i] == vector[j]) {
                count++;
                frecuencia[j] = 0;
            }
        }
        if(frecuencia[i] != 0) {
            frecuencia[i] = count;
        }
    }

    printf("Frecuencia de los elementos:\n");
    for(i = 0; i < n; i++) {
        if(frecuencia[i] != 0) {
            printf("%d aparece %d veces.\n", vector[i], frecuencia[i]);
        }
    }

    return 0;
}
