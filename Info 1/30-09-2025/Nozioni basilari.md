# Nozioni basilari
Il computer è una macchina configurabile, i quali componenti principali sono:
- Processore
- Memoria

La <b>programmazione</b> ci da il mezzo di fornire al computer istruzioni specifiche in un linguaggio specifico (codice) per risolvere problemi.

Richiede <b>problem solving</b>:
- Pianificazione
- Debug e Test
- Può richiedere molte iterazioni

La programmazione si tratta essenzialmente nel prendere un certo <b>input</b> e produrre un <b>output</b>. Errori e bug sono normali nel processo della programmazione, ed è richiesta molta pratica.

# Cos'è un linguaggio di programmaione?
I computer eseguono istruzioni binarie precise,
ma questa è una lingua difficile da comprendere 
per gli esseri umani.

I <b>linguaggi di programmazione</b> si interpongono
tra il linguaggio umano ed il linguaggio macchina,
e deve essere:
- Abbastanza preciso da essere tradotto in codice macchina
- Abbastanza semplice da essere compreso dagli esseri umani

I computer eseguono centinaia di programmi in parallelo.
Per organizzare l'esecuzione di questi programmi viene utilizzato
il <b>sistema operativo</b>, un'interfaccia tra utente e computer. 
Si occupa di gestire i processi e gli accessi alla memoria.

- Linux (based)
    - Kernel per SO open-source
    - Basato su un modello UNIX-like
    - Affidabile, leggero, sicuro
- macOS (based)
- Windows (cringe)

Richiesto per il corso: un compilatore C e un text editor.

# Come interagiscono i programmatori con il computer?
- Terminale
    - Input (comandi) e output dalla <b>Shell</b>
- Shell
    - Bash, Zsh, PowerShell, CMD, ecc.
    - Programma nel terminale
    - Esegue programmi e comandi con una sintassi
    - La useremo per la compilazione di programmi C
    - <b>Prompt</b> di esempio: `user@hostname:directory$`
        - Indica che la shell è pronta a ricevere input
    - Comandi comuni della shell UNIX:
        - `ls`: Elenca i file nella directory attuale
        - `mkdir nome`: Crea la directory `nome`
        - `cd nome`: Entra nella directory `nome`
        - `cd ..`: Entra nella directory superiore
        - `cd`: Torna alla home (`$HOME`)
        - `pwd`: Stampa la directory attuale
        - `cp src dst`: Copia file/directory (con `-r`, recursive) da `src` a `dst`
        - `mv src dst`: Sposta o rinomina file/directory da `src` a `dst`
        - `rm nome`: Rimuove file/directory (con `-r`, recursive) <b>permanentemente</b>

# Perchè il C?
- Molti linguaggi moderni derivano dal C
- Insegna l'architettura sottostante
- La maggior parte dei kernel sono scritti quasi interamente in C
- Insegna:
    - Problem solving
    - Competenze trasferibili su altri linguaggi

# Il primo programma in C
Stampa `Hello Programmazione-1` sul terminale.
```c
// Commento, non letto dal compilatore
// Includo un file nel programma
#include <stdio.h> // Libreria standard I/O

// Funzione main
// L'esecuzione del programma inizia qui.
// void può essere omesso
int main(void) {
    // Stampo output formattato (printf)
    printf("Hello Programmazione-1\n");
    return 0; // Ritorno 0 (tutto ok)
}
```

Comandi da terminale per compilarlo: 
```sh
gcc hello_world.c # compilazione
./a.out # esecuzione
```