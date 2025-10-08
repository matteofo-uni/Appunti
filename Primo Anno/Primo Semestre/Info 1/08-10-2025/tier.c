#include <stdio.h>

int main() {
    int tier;
    printf("Inserire un tier (1, 2, 3): \n");
    int read = scanf("%d", &tier);

    if (read != 1) {
        printf("Input errato!\n");
        return 1;
    }

    switch (tier) {
        case 3:
            printf("Servizi premium, ");
        case 2:
            printf("Supporto prioritario, ");
        case 1:
            printf("Servizio base.");
            break;
        default:
            printf("Input errato!\n");
            return 1;
            break;
    }

    printf("\n");

    return 0;
}