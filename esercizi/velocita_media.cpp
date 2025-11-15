/* Esercizio Chiedi all'utente di inserire la distanza percorsa in chilometri 
  e il tempo impiegato in ore.
• Calcola e stampa la velocità media in km/h e in m/s.
• Ricorda che 1 km/h equivale circa 0.27778 m/s.
• È vietato utilizzare costrutti di controllo condizionali.*/

#include <iostream>
using namespace std;

int main() {

    float km;
    cout <<"Inserisci la distanza in km";
    cin >>km;

    float tempo;
    cout << "Inserisci il tempo impiegato in ore";
    cin >>tempo;

   float v_h;
   v_h = km/tempo;
   cout <<"La velocita' media in km/h e'"<<v_h;

   
   float v_s;
   v_s = 0.27778 *v_h;
   cout <<"velocita' media in m/s e'"<<v_s;



   return 0;

}