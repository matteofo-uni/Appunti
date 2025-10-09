#include <stdio.h>

int main() {
    int i = -1;
    
    printf("Inserire un numero intero: ");
    int read = scanf("%d", &i);

    printf("Il valore inserito è: %d\n", i);

    if (read != 1) {
        printf("Input errato!\n");
    } else {
        if (i % 2 == 0) {
            printf("Il numero %d è pari.\n", i);
        } else {
            printf("Il numero %d è dispari.\n", i);
        }
    }

    return 0;
}