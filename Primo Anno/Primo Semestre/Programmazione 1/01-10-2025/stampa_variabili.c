#include <stdio.h>

int main(void) {
    // Dichiaro una variabile
    int my_age;

    // La inizializzo
    my_age = 21;
    printf("La mia età è: %d\n", my_age);

    // Possiamo modificare il valore
    my_age = 25;
    printf("La mia età adesso è: %d\n", my_age);

    // Dichiarazione + inizializzazione sulla stessa riga
    double radius = 3.5;
    printf("Il raggio è: %lf\n", radius);

    char grade = 'B';
    printf("Il voto è: %c\n", grade);

    return 0;
}