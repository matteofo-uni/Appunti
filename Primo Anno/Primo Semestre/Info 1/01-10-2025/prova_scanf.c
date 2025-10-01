#include <stdio.h>

int main(void) {
    char initial;
    printf("Inserisci l'iniziale del tuo nome: ");
    scanf("%c", &initial);

    int age;
    printf("Inserisci la tua età: ");
    scanf("%d", &age);

    double height;
    printf("Inserisci la tua altezza: ");
    scanf("%lf", &height);

    return 0;
}