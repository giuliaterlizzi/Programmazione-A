/*Esercizio Area del rettangolo 
• Chiedi all'utente di inserire la base e l'altezza di un rettangolo.
• Calcola e stampa l'area del rettangolo.*/

#include <iostream>
using namespace std;

int main() {
    
    float base;
    float altezza;
    
    cout <<"Inserisci la base del rettangolo"<<endl;
    cin >> base;
    
    cout <<"Inserisci l'altezza del rettanolo"<<endl;
    cin >> altezza;
    
    float area = base * altezza;
    cout <<"L'area del rettangolo misura:"<< " "<< area <<endl;
    
    
    return 0;
}