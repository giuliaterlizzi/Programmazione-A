/*Esercizio
• Chiedi all'utente di inserire tre numeri interi.
• Calcola e stampa il prodotto dei tre numeri. */


#include <iostream>
using namespace std;

int main() {

    int x;
    int y;
    int z;

    cout << "Inserisci 3 numeri interi"<<endl;
    
    cout <<"Inserisci il primo";
    cin >>x;
    cout <<"Inserisci il secondo";
    cin >>y;
    cout <<"Inserisci il terzo";
    cin >>z;

    int prodotto = x * y * z;
    cout <<"Il prodotto dei tre numeri e':"<<prodotto;


    return 0;
}