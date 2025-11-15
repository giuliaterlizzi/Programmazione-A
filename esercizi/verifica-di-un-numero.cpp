/* Esercizio VERIFICA DI UN NUMERO
    - chiedi all'utente di inserire un numero intero
    - determinare se il numero è positivo, negativo o uguale a zero, e stampare il risultato
    - è possibile utilizzare solo il costrutto condizionale if*/

#include <iostream>
using namespace std;

int main() {

    int numero;

    cout << "Inserisci un numero intero" << endl;
    cin >> numero;

    if(numero > 0){
        cout << "il numero è positivo" << endl;
    }else if (numero < 0){
        cout << "il numero è negativo" << endl;
    }else {
        cout << "uguale a zero" << endl;
    }

    return 0;
}