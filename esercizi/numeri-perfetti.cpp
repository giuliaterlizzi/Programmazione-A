/*Scrivi un programma in C++ che riceva in input un numero intero positivo n. 
Il programma deve calcolare la somma di tutti i suoi divisori propri 
(ovvero tutti i divisori compresi tra 1 e n−1).
Infine, il programma deve determinare e stampare se il numero è perfetto.
(Nota: un numero si definisce perfetto se la somma dei suoi divisori propri è 
uguale al numero stesso, come ad esempio il numero 6, i cui divisori sono 1, 2, 3 e 1+2+3=6)." */


#include <iostream>
using namespace std;

int main() {
    
 
    
    int n;
    cout <<"inserisci un numero"<<endl;
    cin >>n;
    
    int i = 1;
    int somma = 0;
    while (i < n){
        if(n % i == 0){
            somma = somma + i;
        } 
    
        i++;
    } 
    
    if (somma == n){
        cout<< "Il numero e' perfetto"<< " ";
    }
    else {
        cout << "Non e' perfetto" << " ";
}
        
     cout << "La somma dei divisori di"<< " " << n <<" "<< "e':"<<somma;
    

    return 0;
}