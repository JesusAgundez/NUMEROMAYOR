#include <stdio.h>

int main() {
    int nums[10];
    int i, j, temp;

    // Solicitamos los 10 números al usuario
    printf("Ingresa 10 números: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }

    // Ordenamos los números utilizando el método de burbuja
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (nums[j] < nums[j+1]) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    // Imprimimos los números ordenados de mayor a menor
    printf("Los números ordenados de mayor a menor son: \n");
    for (i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
