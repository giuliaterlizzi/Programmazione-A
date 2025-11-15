/*Esercizio Calcolo del perimetro di un quadrato
• Chiedi all'utente di inserire il valore del lato di un quadrato.
• Calcola stampa il perimetro del quadrato.*/

#include <iostream>
using namespace std;

int main() {
    int lato;

    cout << "Inserisci il valore di un lato del quadrato" <<endl;
    cin >> lato;
    
    float perimetro = lato * 4;
    
    cout << "Il perimetro del quadrato e' di:" << perimetro << endl;
    
    
    return 0;
}