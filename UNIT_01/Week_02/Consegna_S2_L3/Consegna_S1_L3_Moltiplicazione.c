#include <stdio.h>

int main() {
    float primo_numero, secondo_numero, risultato;

    // Chiediamo all'utente di inserire il primo numero
    printf("Inserisci il primo numero: ");
    scanf("%f", &primo_numero);

    // Chiediamo all'utente di inserire il secondo numero
    printf("Inserisci il secondo numero: ");
    scanf("%f", &secondo_numero);

    // Eseguiamo la moltiplicazione
    risultato = primo_numero * secondo_numero;

    // Mostriamo il risultato all'utente
    printf("Il risultato della moltiplicazione è: %.2f\n", risultato);

    return 0;
}
