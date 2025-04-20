# Mini Programma Domande e Risposte (C++)

## Descrizione

Questo è un semplice programma console scritto in C++, sviluppato durante il terzo anno di scuola superiore. Lo scopo del programma è aiutare nello studio o nel ripasso personale presentando domande da un file di testo e mostrando poi la risposta corretta per un confronto mentale.

## Come Funziona

1.  Il programma legge coppie di domande e risposte da un file di testo chiamato `input.txt`.
2.  Mostra una domanda alla volta sulla console.
3.  Attende che l'utente prema il tasto Invio (dando il tempo di pensare alla risposta).
4.  Una volta premuto Invio, il programma mostra la risposta corretta letta dal file.
5.  Continua con la domanda random finché utente non chiuda il programma.

## Tecnologia Utilizzata

*   C++

## File di Input

Il programma si aspetta di trovare un file chiamato `input.txt` nella stessa directory dell'eseguibile. Il file deve avere il seguente formato:

*   Una domanda per riga.
*   La risposta corrispondente sulla riga immediatamente successiva.

**Esempio di `input.txt`:**

```txt
Qual è la capitale d'Italia?
Roma
Quanto fa 2 + 2?
4
Qual è il fiume più lungo d'Italia?
Po
