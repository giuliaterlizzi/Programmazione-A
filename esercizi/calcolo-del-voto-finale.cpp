/*Esercizio  CALCOLO DEL VOTO FINALE
    -chiedi all'utente di inserire un punteggio numerico (un voto da 0 a 100) e fare i relativi controlli.
    -usa solo il costrutto if per determinare la fascia del voto:
        -se il voto è tra 90 e 100, stampa "Eccellente"
        -se il voto è tra 80 e 89, stampa "Ottimo"
        -se il voto è tra 70 e 79, stampa "Buono"
        -se il voto è tra 60 e 69 stampa "Sufficiente"
        -se il voto è inferiore a 60,stampa "Insufficiente"*/

    #include <iostream>
    using namespace std;

    int main() {

        int punteggio;
        
        cout << "Inserisci un voto da 0 a 100" <<endl;
        cin >> punteggio;

        if (punteggio >= 90 && punteggio <= 100){
            cout << "Eccellente"<<endl;

        }else if (punteggio >= 80 && punteggio <= 89){
            cout <<"Ottimo"<<endl;

        }else if(punteggio >= 70 && punteggio <= 79){
            cout <<"Buono" << endl;

        }else if (punteggio >= 60 && punteggio <= 69){
            cout << "Sufficiente" << endl;

        }else if (punteggio < 60){
            cout << "Insufficiente";
        }


        return 0;
    }