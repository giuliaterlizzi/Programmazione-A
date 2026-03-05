/*
Scrivere un programma in C++ che legga da tastiera tre numeri interi. 
I primi due numeri sono da intendersi come operandi, 
mentre il terzo numero specifica l’operazione da fare su di essi.
 In particolare, se l’operazione vale 1, allora occorre calcolare 
 e stampare la somma dei due operandi. 
 Se l’operazione vale 2, occorre calcolare e stampare la differenza dei due operandi. 
 In tutti gli altri casi stampare un messaggio di errore.*/



#include <iostream>
using namespace std;

int main() {
   
   int numero1;
   int numero2;
   int numero3;
   float operazione;

cout << "Inserisci due operandi" << endl;
cin >> numero1 >> numero2;
cout << "Inserire 1 se vuoi sommare, 2 se vuoi la differenza" << endl;
cin >> numero3;
   
   
   if (numero3 == 1) {
       operazione = numero1 + numero2;
       cout << "la somma e' di:" << operazione;
   }
    else if(numero3 == 2){
       operazione = numero1 - numero2;
       cout << "la differenza e' di:"<< operazione;
    }
    else {
        cout << "Errore";
    }
   
    return 0;
}