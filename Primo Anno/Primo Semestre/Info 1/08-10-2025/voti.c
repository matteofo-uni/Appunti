#include <stdio.h>

int main() {
    char voto;
    printf("Inserisci un voto (maiuscole, A-F): ");
    int read = scanf("%c", &voto);

    if (read != 1) {
        printf("Input errato!\n");
        return 1;
    }

    switch (voto) {
        case 'A':
        case 'B':
        case 'C':
            printf("Tra A e C!\n");
            break;
        case 'D':
        case 'E':
            printf("Tra D ed E.\n");
            break;
        case 'F':
            printf("F :(\n");
            break;
        default:
            printf("Input errato!\n");
            return 1;
            break;
    }

    return 0;
}