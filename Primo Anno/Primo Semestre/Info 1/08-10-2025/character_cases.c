#include <stdio.h>

int main() {
    char c;
    printf("Inserire un carattere: ");
    scanf(" %c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("Maiuscola\n");
    } else if (c >= 'a' && c <= 'z') {
        printf("Minuscola\n");
    } else {
        printf("%c non è una lettera\n", c);
    }

    return 0;
}