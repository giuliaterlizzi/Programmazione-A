/*Chiedi all’utente un numero n, poi calcola
 la somma dei numeri da 1 a n.
Esempio: se l’utente inserisce 5, il programma deve stampare 15. */

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Inserisci un numero"<< endl;
    cin >> n;


 
    int i = 1;
    int somma = 0;
    while(n >= i){
        somma = i + somma;
        i++;  

    }
    cout << "La somma dei numeri da 1 a" <<" "<< n <<" "<< "e' di:" <<" "<< somma; 


    return 0;
}
