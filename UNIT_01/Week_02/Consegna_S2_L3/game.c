#include <stdio.h>

// Dichiarazione della funzione partita che non restituisce alcun valore
void partita();

int main() {
    char scelta;
    
    // Stampa il menu principale per l'utente
    printf("\n\nBenvenuto! Cosa vuoi fare?\n\nA) Iniziare una nuova partita\n\nB) Uscire dal gioco\n\n");
    printf("Inserisci la lettera maiuscola corrispondente: ");
    
    // Legge la scelta dell'utente
    scanf(" %c", &scelta);  
    
    // Controlla la scelta dell'utente
    if (scelta == 'A') {
        // Se l'utente sceglie 'A', inizia una nuova partita
        partita();
    }
    else if (scelta == 'B') {
        // Se l'utente sceglie 'B', esce dal gioco con un messaggio di ringraziamento
        printf("\nUscita in corso, grazie per aver giocato.\n\n");
        return 0;
    }
    else {
        // Se l'utente inserisce una scelta non valida, mostra un messaggio di errore
        printf("\nScelta non valida. Inserire lettera A o B!\n\n");
        // Ritorna alla funzione main per permettere all'utente di fare una nuova scelta
        return main();
    }

    return 0;
}

// Definizione della funzione partita che gestisce il quiz
void partita() {
    int punteggio = 0;  // Inizializza il punteggio a 0
    char nickname[20];  // Variabile per il nickname dell'utente
    char risposta1, risposta2, risposta3;  // Variabili per le risposte dell'utente
    
    printf("\n\nNuova partita iniziata!\n\n");
    
    // Chiede all'utente di inserire il proprio nickname
    printf("Inserisci nickname: ");
    scanf("%s", nickname);  // Legge il nickname inserito dall'utente

    // Prima domanda
    printf("\n\nDomanda 1: La capitale dell'Italia?\n");
    printf("\nA -> Roma\n\nB -> Milano\n\nC -> Napoli\n\n");
    printf("La risposta è (inserire lettera maiuscola corrispondente): ");
    scanf(" %c", &risposta1);  // Legge la risposta dell'utente
    
    // Controlla se la risposta è corretta e incrementa il punteggio se lo è
    if (risposta1 == 'A') {
        punteggio++;
    }

    // Seconda domanda
    printf("\n\nDomanda 2: Il capoluogo dell'Emilia Romagna?\n");
    printf("\nA -> Rimini\n\nB -> Parma\n\nC -> Bologna\n");
    printf("La risposta è (inserire lettera maiuscola corrispondente): ");
    scanf(" %c", &risposta2);  // Legge la risposta dell'utente

    // Controlla se la risposta è corretta e incrementa il punteggio se lo è
    if (risposta2 == 'C') {
        punteggio++;
    }

    // Terza domanda
    printf("\n\nDomanda 3: Isola con estensione maggiore?\n");
    printf("\nA -> Sardegna\n\nB -> Sicilia\n\nC -> Elba\n");
    printf("La risposta è (inserire lettera maiuscola corrispondente): ");
    scanf(" %c", &risposta3);  // Legge la risposta dell'utente

    // Controlla se la risposta è corretta e incrementa il punteggio se lo è
    if (risposta3 == 'B') {
        punteggio++;
    }

    // Stampa il risultato del quiz con il nickname e il punteggio dell'utente
    printf("\n\nFine del quiz! %s ha totalizzato il seguente punteggio: %d!\n\n", nickname, punteggio);
    
    // Commento in base al punteggio ottenuto dall'utente
    if (punteggio < 2) {
        printf("Sei scarso, hai bisogno di un ripasso di geografia!\n");
    } else {
        printf("Complimenti! Sei bravo in geografia!\n");
    }
    
    // Ritorna alla funzione main per permettere all'utente di fare una nuova scelta
    main();
}
