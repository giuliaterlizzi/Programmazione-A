/*Esercizio
• Chiedi all'utente di inserire due numeri interi a e b.
• Calcola e stampa la differenza tra i quadrati dei due numeri: a^2−b^2 */


#include <iostream>
using namespace std;

int main() {

    int a;
    int b;

    cout <<"Inserisci due numeri interi"<<endl;
    cin >> a >> b;


    int differenza = (a*a - b*b);
    cout << "La differentra tra i quadrati dei due numeri e'"<<differenza;



    return 0;
}