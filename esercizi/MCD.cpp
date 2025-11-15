/*Si scriva un programma che legga da input due numeri interi 
positivi a e b e calcoli il loro Massimo Comune Divisore (MCD) 
utilizzando l’algoritmo di Euclide 
(https://it.wikipedia.org/wiki/Algoritmo_di_Euclide)*/


#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    cout <<"Inserisci due numeri interi positivi"<<endl;
    cin >> a >> b;

    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    
    }

    cout << "Il Massimo Comune Divisore e':"<< " "<< a;

    return 0;
}