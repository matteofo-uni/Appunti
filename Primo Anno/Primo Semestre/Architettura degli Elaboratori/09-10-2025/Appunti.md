# Esercitazione
- Prof: Sara Manzoni
- Laboratorio: Capienza 140 persone
    - Il resto può seguire online

# Rappresentazioni
- Numeri interi positivi e relativi
- Numeri reali (IEEE 754)
- Caratteri

# Esercizi
## Esercizio 1
Convertire i numeri 0x52, 0x1010101, 0xF3B4C in binario.

0x52 = 0b01010010

0x1010101 = 0b 0001000000010000000100000001

0xF3B4C = 0b1111 0011 1011 0100 1100

## Esercizio 2
Convertire il numero decimale 98 in esadecimale.

### Metodo 1
Divido il numero per la base desiderata fino ad ottenere quoziente 0.

98 / 16 = 6, resto 2

6 / 16 = 0, resto 6

**Quindi, 98 = 0x62**

### Metodo 2
Converto il numero in binario, e poi in esadecimale

98 / 2 = 49, resto 0
49 / 2 = 24, resto 1
24 / 2 = 12, resto 0
12 / 2 = 6, resto 0
6 / 2 = 3, resto 0
3 / 2 = 1, resto 1
1 / 2 = 0, resto 1

**Quindi, 98 = 0b1100010**

Passo in esadecimale con il metodo dell'es. 1, **quindi 0b1100010 = 0x62**

### Metodo 3
Rappresento il numero come somma di potenze di 2

98 = (64 + 32 + 2) = 

= (2^6 + 2^5 + 2^1) =

= **0b1100010**

Passo in esadecimale con il metodo dell'es. 1, **quindi 0b1100010 = 0x62**

## Esercizio 3
Se il numero decimale 100 fosse rappresentato in binario, quale sarebbe il valore dei suoi bit in posizione 3 e in posizione 5?

100 = (64 + 32 + 4)

100 = 0b01100100

Pos. 3 = 1, Pos. 5 = 0

## Esercizio 4
Effettuare le conversioni:
- 0b110011101111011 = b8? = b16?

    0b110011101111011 = 63573 (b8)

    0b110011101111011 = 0x677B
- 0x71A9 = b8? = b2?

    0x71A9 = 0b0111000110101001

    0b0111000110101001 = 70651 (b8)
    
- 736 (b8) = b16? = b2?

    736 = 0b111011101

    0b111011101 = 0x1DD

## Esercizio 5
Convertire i numeri decimali 33, 10, 59, -59, -20 e -114 in binario modulo e segno su 8 bit

- 33 = 0b00011111
- 10 = 0b00001010
- 59 = 0b00111011
- -59 = 0b10111011
- -20 = 0b10010100
- -114 = 0b11110010

## Esercizio 6
Convertire i numeri decimali 33, 10, 59, -59, -20 e -114 in binario complemento a 2 e segno su 8 bit

- 33 = 0b00011111
- 10 = 0b00001010
- 59 = 0b00111011
- -59 = 0b11000101
- -20 = 0b11101011
- -114 = 0b10001100

## Esercizio 7
Quale numero decimale rappresentano i numeri binari in complemento a 2, 11000101, 1101, 101 e 111101?

- 11000101
    - Numero negativo
    - 0b1000101 - 1 = 0b1000100
    - 0b0111011 = -59
- 1101
    - Numero negativo
    - 0b101 - 1 = 0b100
    - 0b011 = -3
- 101
    - Numero negativo
    - 0b01 - 1 = 0b00
    - 0b11 = -3
- 111101
    - Numero negativo
    - 0b11101 - 1 = 0b11100
    - 0b00011 = -3

## Esercizio 8
Quale numero decimale rappresenta il seguente numero binario in complemento a 2?
- 1111 1111 1111 1111 1111 1110 0000 1100

## Esercizio 9 
Date le seguenti coppie di numeri binari, considerarli prima in MS e poi in CA2; per ciascuna coppia si determini qual'è il maggiore tra i valori rappresentati (o se rappresentano il medesimo valore)

- 01001 ? 10001
- 10110 ? 11010
- 101 ? 11101
- 11111 ? 10001

## Esercizio 10 
Eseguire 53 - 35 in complemento a 2 su 8 bit

53 = 0b00110101<br>
-35 = 0b11011011

53 + - 35 = 

0b00110101 -<br>
0b11011011
0b00010010

## Vedere il resto su eLearning