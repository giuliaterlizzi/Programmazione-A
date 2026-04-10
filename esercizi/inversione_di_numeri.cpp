/*• Chiedi all'utente di inserire un numero intero positivo.
  • Utilizzando un ciclo, inverti l’ordine delle sue cifre (es. 1234 → 4321).
  • Stampa il numero invertito.
  • Utilizzare solo il costrutto while. */

  #include <iostream>
  using namespace std;

  int main() {

    int numero;
    cout << "Inserisci un numero intero positivo" << endl;
    cin >> numero;


    int invertito = 0;
    int cifra;
    int numero_originale = numero; // variabile di supporto per visualizzare numero iniziale.

    while(numero > 0) { //finchè numero non arriva a 0.

        cifra = numero % 10; // prendo l'ultima cifra.

        invertito = (invertito * 10) + cifra; // (sposto a sinistra) la cifra che ho preso .

        numero = numero / 10; // tolgo l'ultimo numero.

    }

    cout << "Il numero invertito di"<< " " << numero_originale << " " << "e':" << " " << invertito;




    return 0;
  }