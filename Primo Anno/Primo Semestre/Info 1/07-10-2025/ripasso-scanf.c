#include <stdio.h>

int main(void) {
    int x;
    int y;
    printf("Enter an integer: ");
    scanf("%d %d", &x, &y);
    printf("You entered %d %d\n", x, y);

    double real;
    printf("Enter a real number: ");
    scanf("%lf", &real);
    printf("You entered %lf\n", real);

    char grade;
    printf("Enter your grade: ");
    // spazio: ignora il \n precedente
    scanf(" %c", &grade);
    printf("Your grade was: %c\n", grade);

    'a';
    'B';
    return 0;
}