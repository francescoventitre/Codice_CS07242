#include <stdio.h>

int main() {
    int num1, num2, prodotto;

    // Chiede all'utente di inserire i due numeri
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);

    // Calcola il prodotto
    prodotto = num1 * num2;

    // Stampa il risultato
    printf("Il prodotto di %d e %d è: %d\n", num1, num2, prodotto);

    return 0;
}