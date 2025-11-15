/* Esercizio CALCOLO DEL MESE
    -chiedi all'utente di inserire un numero tra 1 e 12 che rappresenta un mese dell'anno (fare il controllo)
    -stampare il mese corrispondente al numero (gennaio,febbraio,ecc.)
    -è possibile utilizzare solo il costrutto condizionale if*/

#include <iostream>
using namespace std;

int main() {

    int numero;
    
    cout << "Inserisci un numero tra 1 e 12" <<endl;
    cin >> numero;
    

    if(numero == 1){
        cout << "Gennaio"<< endl;

    }else if (numero == 2){
        cout << "Febbraio"<< endl;

    }else if (numero == 3){
        cout << "Marzo" << endl;

    }else if (numero ==4){
        cout << "Aprile"<< endl;

    }else if (numero == 5){
        cout << "Maggio"<< endl;

    }else if (numero == 6){
        cout << "Giugno"<< endl;

    }else if (numero == 7){
        cout << "Luglio" << endl;

    }else if (numero == 8){
        cout << "Agosto"<<endl;

    }else if (numero == 9){
        cout << "Settembre"<<endl;

    }else if (numero == 10){
        cout << "Ottobre" <<endl;

    }else if (numero == 11){
        cout << "Novembre"<<endl;

    }else if (numero == 12){
        cout << "Dicembre";
    }


    return 0;
}