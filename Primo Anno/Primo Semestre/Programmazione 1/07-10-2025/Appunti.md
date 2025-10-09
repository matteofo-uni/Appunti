# Programma di oggi
- Ripasso `scanf()` e `printf()`
- Uso di `#define` e costanti
- `if` statements

# Ripasso di variabili e `printf`
```c
#include <stdio.h>

int main(void) {
    int number_of_weeks = 10;
    double distance_in_km = 95.5;
    char grade = 'B';

    printf("There are %d weeks\n", number_of_weeks);
    printf("The distance is %lf cm\n", distance_in_cm);
    printf("You got a %c!\n", grade);

    distance_in_cm = distance_in_cm - 5;
    printf("the distance is now %lf cm\n", distance_in_cm);

    return 0;
}
```

# Ripasso di variabili e `scanf`
```c
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
    // spazio prima di %c: ignora il \n precedente
    scanf(" %c", &grade);
    printf("Your grade was: %c\n", grade);

    return 0;
}
```

# Costanti
- Sono come variabili, ma **non cambiano mai**.
- Definite all'inizio del codice (dopo gli `#include`)
- Uso `#define NOME {valore}`
- Style guide: usare nomi **MAIUSCOLI**

Esempio:
```c
#include <stdio.h>

#define MINUTES_PER_HOUR 60

int main(void) {
    double total_hours = 95.5;
    double total_minutes = total_hours * MINUTES_PER_HOUR;
    //etc
    return 0;
}
```

# Flusso di controllo
## Prendere decisioni con `if`
- `if` permette a C di decidere in base a domande **vero/falso**, ad es.
    - x è pari?
    - y è maggiore di 10?
    - x è minore di y?
- In C **vero** e **falso** sono interi:
    - **0** è `false`
    - **1** (o qualsiasi **non-zero**) è `true`

```c
// Il codice tra graffe eseguesolo se la condizione è vera
if (condition) {
    // do something;
    // do more things;
}
```

## Operatori relazionali
| Operatore  | Significato            |
|------|-------------------|
| `<`  | Minore            |
| `>`  | Maggiore          |
| `<=` | Minore o uguale   |
| `>=` | Maggiore o uguale |
| `==` | Uguale            |
| `!=` | Diverso           |

- Servono per confrontare coppie di numeri
- Restituiscono 0 se falso, 1 se vero
- Attenzione a non confondere
    - `=` (assegnazione)
    - `==` (confronto)
- Prudenza con `==` e `!=` su `double` (approssimazione)

## `if-else` statement
Possiamo aggiungere `else` per eseguire un blocco quando la condizione è **falsa**.
```c
if (condizione) {
    // esegue se la condizione è vera
} else {
    // esegue se la condizione è falsa
}
```

```c
if (condition_1) {
    // ...
} else if (condition_2) {
    // ...
} else {
    // ...
}
```

Esempio:
```c
#define COLD 10

if (temperature <= COLD) {
    printf("I am cold!\n");
} else {
    printf("I am not cold!\n");
}
```