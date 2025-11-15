/* Esercizio Conversione da chilometri a metri
• Chiedi all'utente di inserire una distanza in chilometri (km).
• Calcola e stampa la distanza equivalente in metri (m). */

#include <iostream>
using namespace std;

int main() {
    float km;
    
    cout << "Inserisci una distanza in chilometri" << endl;
    cin >>km;
    
    float metri = km * 1000;
    cout << "La distanza equivalente in metri e' di:" << metri;
    
    
    
    return 0;
}