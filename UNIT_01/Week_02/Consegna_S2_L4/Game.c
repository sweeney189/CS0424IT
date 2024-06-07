#include <stdio.h>

// Funzione per iniziare una nuova partita
void nuovaPartita() {
    char nome[50];
    int punteggio = 0;
    int risposta;

    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);

    // Domanda 1
    printf("Qual è la capitale dell'Italia?\n");
    printf("1) Milano\n2) Roma\n3) Napoli\n");
    printf("La tua risposta: ");
    scanf("%d", &risposta);
    if (risposta == 2) {
        punteggio++;
    }

    // Domanda 2
    printf("Quanto fa 2 + 2?\n");
    printf("1) 3\n2) 4\n3) 5\n");
    printf("La tua risposta: ");
    scanf("%d", &risposta);
    if (risposta == 2) {
        punteggio++;
    }

    // Domanda 3
    printf("Quale linguaggio di programmazione stiamo usando?\n");
    printf("1) Python\n2) C\n3) Java\n");
    printf("La tua risposta: ");
    scanf("%d", &risposta);
    if (risposta == 2) {
        punteggio++;
    }

    printf("%s, hai totalizzato %d punti!\n", nome, punteggio);
}

int main() {
    char scelta;

    printf("Benvenuto al gioco di domanda/risposta!\n");

    do {
        printf("Scegli un'opzione:\n");
        printf("A) Iniziare una nuova partita\n");
        printf("B) Uscire dal gioco\n");
        printf("La tua scelta: ");
        scanf(" %c", &scelta); 

        if (scelta == 'A' || scelta == 'a') {
            nuovaPartita();
        } else if (scelta == 'B' || scelta == 'b') {
            printf("Grazie per aver giocato! Alla prossima.\n");
        } else {
            printf("Scelta non valida. Riprova.\n");
        }
    } while (scelta != 'B' && scelta != 'b');

    return 0;
}
