#include <stdio.h>

int main() {
    int i;
    
    printf("Inserire un numero intero: ");
    scanf("%d", &i);

    if (i % 2 == 0) {
        printf("Il numero %d è pari.\n", i);
    } else {
        printf("Il numero %d è dispari.\n", i);
    }

    return 0;
}