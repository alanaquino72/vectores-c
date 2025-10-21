/* Encuentra la longitud de la subsecuencia estrictamente creciente más larga dentro de un vector de N enteros (no necesariamente contigua). */

#include <stdio.h>

int main() {
    int n, i, j;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    int vector[n], dp[n];

    for(i = 0; i < n; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &vector[i]);
        dp[i] = 1;
    }

    for(i = 1; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(vector[i] > vector[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }

    int max = dp[0];
    for(i = 1; i < n; i++) {
        if(dp[i] > max) {
            max = dp[i];
        }
    }

    printf("La longitud de la subsecuencia creciente más larga es: %d\n", max);

    return 0;
}
