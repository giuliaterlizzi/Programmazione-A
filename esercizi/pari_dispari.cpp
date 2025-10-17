/*Esercizio
• Chiedi all'utente di inserire un numero intero.
• Calcola e stampa il doppio se il numero è pari, il triplo altrimenti.
• È vietato utilizzare costrutti di controllo condizionali.*/

#include <iostream>
using namespace std;

int main(){

    int numero;
    cout << "Inserisci un numero intero"<<endl;
    cin >>numero;


    int risultato;

    risultato = (numero * (2 + ( numero %2 )));

    cout <<"Il risultato e'"<<risultato;



    return 0;
}