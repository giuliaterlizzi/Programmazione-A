/*Esercizio
• Chiedi all'utente di inserire un valore in minuti.
• Calcola e stampa il valore equivalente in secondi.*/


#include <iostream>
using namespace std;

int main(){
   
    int minuti;
    cout << "Inserisci il valore in minuti"<<endl;
    cin >> minuti;
    
    int secondi = 60 * minuti ;
    cout << "Il valore equivalente in secondi e':"<< secondi;



    return 0;
}