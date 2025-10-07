#include <stdio.h>

int main(void) {
    char B = 'B';
    char e = 'e';

    char b = 'B' - 'A' + 'a';
    char E = 'e' - 'a' + 'A';

    printf("La %c minuscola è %c\n", B, b);
    printf("La %c maiuscola è %c\n", e, E);

    return 0;
}