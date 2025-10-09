# Compito della scorsa volta
```c
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
```

# Altro compito
Scrivere `guessing_game.c`, chiedere all'utente di indovinare un numero segreto (42)

```c
#include <stdio.h>
#define SECRET 42

int main() {
    int guess;
    printf("Guess the number!");
    scanf("%d", &guess);

    if (guess == SECRET) {
        printf("You guessed right!\n");
    } else if (guess < SECRET) {
        printf("Higher!\n");
    } else if (guess > SECRET) {
        printf("Lower!\n");
    }

    return 0;
}
```

# `if` annidati
- Possiamo annidare `if` dentro altri `if`
- È sempre meglio evitare troppi livelli
- Nota l'indentazione:
    ```c
    if (x > 0) {
        if (x > 100) {
            printf("big");
        } else {
            printf("small");
        }
        printf(" positive");
    }
    ```

# Operatori logici
| Operatore | Nome | Descrizione                     | Esempio                  |
|-----------|------|---------------------------------|--------------------------|
| `&&`      | and  | vero se **entrambi** veri       | `x > y && x < z`         |
| `\|\|`    | or   | vero se **almeno uno** vero     | `x == MAX \|\| y == MAX` |
| `!`       | not  | vero se l'operatore è **falso** | `! (x >= 0)`             |

## Attenzione!
- **NON** scrivere cose tipo `0 < x < 10`
    - Compila, ma **non** fa quello che vuoi
- Per "compreso tra": `x > 0 && x < 10`
- Non confondere `||` e `&&`

## Esempio
Scrivere `character_cases.c`
- Identificare se un carattere è una lettera maiuscola, una lettera minuscola o non è una lettera

```c
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
```

# Rompere le cose
- È ottima pratica chiedersi **come si può rompere** il tuo codice:
    - Cosa può andare storto?
    - Come gestire gli errori?
    - Cosa mostrare all'utente?

# `scanf`: valori di ritorno e controllo errori
- `scanf` ritorna il numero di input letti con successo
- Possiamo assegnarlo ad una variabile e usarlo per il controllo errori
```c
int inputs_read = scanf("%d %d", &x, &y);
if (inputs_read != 2) {
    printf("Incorrect input!\n");
}
```

## Esempio con `odd_even.c`
```c
#include <stdio.h>

int main() {
    int i;
    
    printf("Inserire un numero intero: ");
    int read = scanf("%d", &i);

    printf("Il valore inserito è: %d\n", i);

    if (read != 1) {
        printf("Input errato!\n");
    } else {
        if (i % 2 == 0) {
            printf("Il numero %d è pari.\n", i);
        } else {
            printf("Il numero %d è dispari.\n", i);
        }
    }

    return 0;
}
```

# Altro sul compilatore
Dato un programma errato:
```c
#include <stdio.h>

int main() {
    int x = 3;

    if (x = 0) {
        printf("A\n");
    } else {
        printf("B\n");
    }
}
```
Se compilo il programma e lo eseguo, viene stampato `B`.

Vediamo le opzioni:
```sh
gcc -Wall -Wextra codice.c -o codice
```
oppure
```sh
gcc -Wall -Wextra -Werror codice.c -o codice
```

In questo modo il compilatore ci darà degli avvisi aggiuntivi sul nostro codice durante la compilazione.

# Operatore `switch-case`
- Quando hai **più rami su un'unica variabile intera/char**, `switch` rende il codice più **chiaro** di una lunga serie di `if-else`.
- Funziona su espressioni di **tipo integrale** (incluso `char`), con **etichette costanti** e **distinte**
- *"Mini-regola"*: se si confronta la **stessa variabile** con 3+ valori, valutare di usare lo `switch`.

## Sintassi di base
```c
switch (espressione) {
    case COSTANTE1:
        // istruzioni
        break;
    case COSTANTE2:
        // istruzioni
        break;
    default:
        // istruzioni
        break;
}
```
- Le **etichette case** sono **costanti** (es. 3, 'A') e **non ripetute**.
- `default` **è opzionale** e può apparire **ovunque** nella lista.
- È buona norma inserire **sempre** `default`: chiarisce il comportamento quando nessun `case` combacia.
    - Inserire `default` alla fine della lista per coerenza visiva e per evitare *fall-through* involontari vesro `default`.

## Esempio
```c
char car = 'F';

switch (car) {
    case 'A':
        printf("Il carattere è A.\n");
        break;
    case 'B':
        printf("Il carattere è B.\n");
        break;
    case 'C':
        printf("Il carattere è C.\n");
        break;
    default:
        printf("Non è A, B o C.\n");
        break;
}
```

## Raggruppare i casi
```c
int val = 5;

switch (val) {
    case 2:
    case 4:
    case 6:
        printf("In {1..6} ed è pari.\n");
        break;
    case 1:
    case 3:
    case 5:
        printf("In {1..6} ed è dispari.\n");
        break;
    default:
        printf("Non è in {1..6}.\n");
        break;
}
```

## `if-else` o `switch`?
- Usa `if-else` se
    - Condizioni con intervalli o espressioni complesse
    - Confronti eterogenei su var diverse
- Usa `switch-case` se
    - Condizioni semplici e costanti
    - Tanti casi da valutare

## Errori comuni
- Dimenticare `break`
    - Esecuzione a cascata non voluta
- `case` duplicati o non costanti
    - Errore
- Mancanza di `default`
    - A volte ok, ma esplicitarlo è migliore

## Esercizio: menu
- Chiedi un voto in lettera ('A'..'F') e stampa un messaggio differente per A-C, D-E ed altro
- Menu (1 somma, 2 prodotto, 3 esci)