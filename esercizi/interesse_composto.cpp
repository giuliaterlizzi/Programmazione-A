/* Esercizio 
  - Chiedi all'utente di inserire il capitale iniziale, 
   il tasso di interesse annuale (in percentuale) e il numero di anni.
  - Calcola e stampa l'importo totale accumulato utilizzando la formula
    dell'interesse composto: A = P×(1+(r/100))^t
    dove P è il capitale iniziale, r è il tasso di interesse e t è il numero di anni.
  - Suggerimento: utilizzare la funzione pow() della libreria <cmath>.
  - È vietato utilizzare costrutti di controllo condizionali.*/


  #include <iostream>
  #include <cmath>
  using namespace std;


  int main(){


    float P;
    float r;
    int t;


    cout << "Inserisci il capitale iniziale"<<endl;
    cin >> P;

    cout <<"Inserisci il tasso di interesse annuale in percentuale"<<endl;
    cin >> r;

    cout << "Inserisci il numero di anni"<<endl;
    cin >>t;



    float A = P * pow(1 + r/100,t);

    cout <<"L'importo totale accumulato e' di:"<<A;



    return 0;
  }