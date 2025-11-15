/*Si scriva un programma che legga da input un numero intero 
positivo n e stampi i primi n termini della sequenza di 
Fibonacci (0, 1, 1, 2, 3, 5, 8, …) */

#include <iostream>
using namespace std;

int main() {

    int numero;
    cout << "Inserisci un numero intero positivo" <<endl;
    cin >> numero;
    cout << "I primi" << " "<< numero << " "<< "termini della sequenza di Fibonacci sono:";

    int a = 0; //primo numero = 0
    int b = 1; //secondo numero = 1
    int i = 0; //creo contatore

    while (i < numero){
        cout << a <<" ";
        int risultato = a+b;
        a = b; //do il valore di b ad a
        b = risultato; //do il valore di risultato a b
        i++;

    }
     

    return 0;
}