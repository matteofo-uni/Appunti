#include <stdio.h>

int main() {
    printf("MENU\n");
    printf("Inserisci 1 per fare la somma;\n");
    printf("Inserisci 2 per fare il prodotto;\n");
    printf("Inserisci 3 per uscire. ");

    double a, b;

    int scelta;
    int read = scanf("%d", &scelta);
    if (read != 1) {
        printf("Input errato!\n");
        return 1;
    }

    switch (scelta) {
        case 1:
            printf("Inserisci due valori con la virgola: \n");
            if (scanf("%lf %lf", &a, &b) != 2) {
                printf("Input errato!\n");
                return 1;
            }

            printf("%lf + %lf = %lf\n", a, b, a + b);
            break;
        case 2:
            printf("Inserisci due valori con la virgola: \n");
            if (scanf("%lf %lf", &a, &b) != 2) {
                printf("Input errato!\n");
                return 1;
            }
            
            printf("%lf * %lf = %lf\n", a, b, a * b);
            break;
        case 3:
        default:
            break;
    }

    return 0;
}