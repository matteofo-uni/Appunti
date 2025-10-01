# Il programma hello world
- Commenti
    - `//` = commento
    - `/* ... */` rende commento tutto ciò che racchiude (...)
    - I commenti sono per **umani**, il compilatore li **ignora**
    - Aiutano a comprendere il codice
    - **Header comment**: commento speciale in cima ad ogni programma

    - Ad Esempio:
        ```c
        // commento
        /* commento
        su
        più 
        righe
        */

        // eccetera
        ```
- Direttiva `#include`
    - Includiamo il file `<stdio.h>` (standard input/output), necessario per `printf`
    - `<stdio.h>` è incluso in quasi tutti i programmi C
- Funzione `main`
    - Ogni programma in C definisce `main`
    - Da lì inizia l'esecuzione
    - Le istruzioni tra le graffe `{}` sono eseguite **in ordine**
    - Quando `main` restituisce 0 indica l'esecuzione corretta
- Funzione `printf`
    - Scrive testo su **standard output (stdout)**
    - È una funzione di `<stdio.h>`
    - Il testo tra le virgolette viene stampato
    - `\n` = a capo (carattere di escape, newline)
    - Ogni istruzione termina con `;`
- Formattazione del codice
    - Usare l'indentazione per la leggibilità
    - Avere una sola istruzione per riga
- Caratteri di escape
    - Iniziano tutti con `\`
        - `\n` Vai a capo
        - `\t` Tabulazione (tab)
        - `\"` Stampa una virgoletta
        - `\\` Stampa un backslash (\\)

# Compilazione del codice
Ogni volta che si fa una modifica al codice è necessario **ricompilarlo**.

I computer **non eseguono codice C**, dobbiamo usare un compilatore (es. `gcc`) per trasformarlo in codice macchina.

Ad esempio:
- `gcc hello_world.c -o hello_world`
    - `gcc` Invoco il compilatore
    - `hello_world.c` Specifico il file da compilare
    - `-o hello_world` Specifico il nome dell'output (eseguibile)

In caso di errori di compilazione, `gcc` specifica la riga e la colonna dove si verificano e in caso suggerisce anche una soluzione.

Il compilatore non può individuare tutti gli errori (ad es. logica), dopo la compilazione è sempre necessario testare il programma ed iterare.

# Basi dell'hardware del computer
Componenti di base:
- CPU
- Memoria RAM
- Storage (HDD, SSD)

## Memorizzazione dei dati
I computer memorizzano i dati in binario (0 e 1), perchè rappresentano stati (acceso/spento) interni al computer (transistor).

Una cifra in binario è detta **bit**.
In un numero binario, ogni cifra ha un valore (potenza di 2). 

Ad esempio, `0b111` = `7`.

## Codifica dei caratteri
Ad ogni carattere viene dato un valore binario. 

Ad esempio nella codifica **ASCII** `0b01000001` = `65` = `'A'`. La codifica **ASCII** usa 8 bit per carattere.

Nel caso di caratteri "speciali" (accenti, altri alfabeti, emoji ecc.) servono più di 255 possibili caratteri. 
**Unicode** permette fino a 2<sup>32</sup> caratteri.

## Altre codifiche
Le emoji hanno colori (sono immagini), ed ogni pixel dell'immagine è codificato con un valore **RGB**.

Altri dati possono essere codificati (es. musica) come bit.

Esistano svariati programmi per interpretare diversi tipi di dati, codificati in modo diverso.

## Progettazione del codice
Viene utilizzato **pseudocodice** per progettare la struttura di un programma prima di scriverlo.

# Le variabili
- Da un **nome** ad una **porzione di memoria**
- Memorizza un tipo specifico di dato
- Ha una dimensione in **byte**
- È variabile perchè è possibile cambiare il valore memorizzato

## I tipi "primitivi"
- `int`: Numeri interi (ad es. `1`, `0`, `999`, `-42`)
- `char`: Carattere (ad es. `'A'`, `'a'`, `'?'`)
- `double`: Numero decimale a virgola mobile (ad es. `3.14159`, `-0.001`)

## Dichiarazione di una variabile
La sintassi per dichiarare una variabile in C è:
```c
tipo nome;
```

Ad esempio:
```c
int age;
```

Dichiarando una variabile, C riserverà una porzione di memoria per contenerla.

## Assegnare un valore ad una variabile
Ad esempio:
```c
// Dichiaro una variabile
int my_age;

// Inizializzo la variabile
my_age = 21;

// Possiamo anche usare questa sintassi:
// Dichiarazione e inizializzazione allo stesso tempo
int my_age2 = 21;
```

## Nomi delle variabili

Alcune convenzioni per i nomi delle variabili:
- Descrivere ciò che è memorizzato (ad es. `age`, `radius` e non `a`, `b`)
- C è case-sensitive: `ansWer` e `answer` sono due nomi diversi
- Iniziare i nomi con lettere minuscole
- Uso dello `snake_case` (separare le parole con `_`)
- Alcune parole sono riservate e non possono essere usate (es. `return`, `int`, `double`)

I nomi delle variabili sono parte importante dello **stile**. È meglio sceglierli bene per rendere il codice più leggibile.

# I tipi
## `int`
- Rappresenta numeri interi
- Tipicamente è grande 32 bit (4 byte), dandoci 2<sup>32</sup> possibili valori
- Limiti di valore:
    - Minimo: -2,147,283,648 (-2<sup>32</sup>)
    - Massimo: 2,147,283,648 (2<sup>32</sup>)

## `char`
- Rappresenta caratteri ASCII
- Sintassi con le virgolette: `'a'`
- Sono piccoli interi (8 bit, 1 byte)
    - Minimo per memorizzare caratteri ASCII
- Assegnando `'a'` ad un `char`, memorizziamo il valore ASCII `97`
- Per vedere i valori dei caratteri ASCII si può usare il comando da terminale `ascii -d`

## `double`
- Rappresenta numeri reali in virgola fissa
- Dimensione: 64 bit (8 byte)
- I `double` sono approssimazioni, non numeri reali esatti

## Primo programma con variabili
```c
int main(void) {
    // Dichiaro una variabile
    int my_age;

    // La inizializzo
    my_age = 21;

    // Possiamo modificare il valore
    my_age = 25;

    // Dichiarazione + inizializzazione sulla stessa riga
    double radius = 3.5;
    char grade = 'B';

    return 0;
}
```

## Stampare i valori delle variabili
Per stampare una variabile si usa sempre `printf`. 

Ogni tipo di dato ha un suo **specificatore**, per dire a printf:
- Il tipo della variabile da stampare
- La posizione dove stamparla

Ad esempio
```c
int my_age = 21;
printf("La mia età è: %d\n", 21);
```

In un programma:
```c
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
```

## Stampare molteplici variabili
```c
int height = 21;
double radius = 3.5;
printf("Altezza %d e raggio %lf\n", height, radius);

char letter = 'A';
printf("La lettera %c ha valore ASCII %d\n", letter, letter);
```

# Leggere input con `scanf`
- Sintassi simile a `printf`
- Usa gli stessi specificatori
- Bisogna usare `&` prima di ogni variabile
    - Indica a `scanf` l'indirizzo
    di memoria della variabile
    per salvarci il valore
- Ad esempio, per leggere un intero:
    ```c
    int age;
    scanf("%d", &age);
    ```

## Programma di esempio con `scanf`
```c
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
```

## Consigli con `scanf`
- Leggere un `int` ignora gli spazi bianchi
- Leggere un `char` **NON** ignora gli spazi bianchi
    - Per farlo:
        ```c
        scanf(" %c", &carattere);
        ```

# Espressioni matematiche
- `+` Addizione
- `-` Sottrazione
- `*` Moltiplicazione
- `/` Divisione
    - Attenzione: il risultato varia in base al tipo (`int` o `double`)
- `%` Modulo (resto intero)

## Precedenze
- Precedenza
    - `a + b * c + d / e` = `a + (b * c) + (d / e)`
- Associatività
    - `a - b + c` = `(a - b) + c`
- Si possono "forzare" le precedenze con le parentesi
    - Ad esempio `(a + b) * c`
    - È buona norma inserire sempre le parentesi

## Matematica con `char`
Ad esempio:
- `'a' + 1` = `'b'`
- `'a' + 2` = `'c'`
- `'e' - 1` = `'d'`

```c
char letter = 'e';
// o letter -= 1;
letter = letter - 1;
// stamperà 'd'
printf("%c\n", letter);
```

## Divisioni
- Se un operando è `double`, risulterà `double`
- Se entrambi gli operandi sono `int`, risulterà `int`
- Si può usare il **cast**: 
    ```c
    1 / (double)2
    ```

## Modulo
L'operatore modulo `%` restituisce il resto della divisione intera.

Ad esempio:
- `5 % 3` = `2`
- Per vedere se un numero è pari:
    - `10 % 2` = `0`, 10 è pari
    - `7 % 2` = `1`, 7 è dispari
    - `4 % 2` = `0`, 4 è pari

## Precisione dei `double`
- Non esiste precisione infinita (richiederebbe infiniti bit)
- Ad esempio `1.0 / 3.0` è un'approssimazione

## Overflow degli `int`
- Se aggiungo 1 all'intero più grande, torna al valore minimo
- Se sottraggo 1 all'intero più piccolo, vado al valore massimo
- Superare i limiti degli interi si chiama **overflow**