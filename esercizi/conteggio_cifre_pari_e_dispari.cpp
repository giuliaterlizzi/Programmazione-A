/* Chiedi all'utente di inserire un numero intero positivo.
    • Usa un ciclo per contare quante cifre pari e quante cifre dispari contiene.
    • Stampa il numero di cifre pari e di cifre dispari.
    • Utilizzare solo il costrutto while. */


#include <iostream>
using namespace std;

int main() {

    int numero;
    cout << "Inserisci un numero intero positivo" << endl;
    cin >> numero;

    int contatore_p = 0;
    int contatore_d = 0;
    int cifra;

    while (numero > 0) { // finchè il numero arriva a 0.

        cifra = numero % 10; // prende l'ultima cifra.

        if (cifra % 2 == 0) { // se la cifra e' pari.
            contatore_p++; // aggiungo ai pari.
       
        } else {
            contatore_d++; //altrimenti aggiungo ai dispari.
        }

        numero = numero / 10; //tolgo l'ultima cifra.
    
    }

        cout << "Il numero di cifre pari sono:" << " " << contatore_p << endl;
        cout << "Il numero di cifre dispari sono:" << " " << contatore_d << endl;



    return 0;
}