/* •Chiedi all'utente di inserire un numero intero positivo.
   •Usare un ciclo per sommare tutte le cifre del numero.
   •Stampare la somma delle cifre.
   •Scrivere la versione con il costrutto while e con il cotrutto do-while. */


   #include <iostream>
   using namespace std;

   int main() {

    // esercizio con il while

    int numero;
    cout << "Inserisci un numero intero positivo" << endl;
    cin >> numero;


    
    int somma = 0;

    while(numero > 0) { //ripeto finchè numero non diventa 0.

        somma = somma + numero % 10; //prendo l'ultima cifra e aggiungila.
        numero = numero / 10; //tolgo l'ultima cifra.

    }

    cout << "Con il cilo while la somma delle cifre e':" << somma << endl; 


 
     //esercizio con il do-while

    int numero1;

    cout << "Inserisci un numero intero positivo" << endl;
    cin >> numero1;

    int somma1 = 0;

    do{


         somma1 = somma1 + numero1 % 10;
         numero1 = numero1 / 10;

    }while (numero1 > 0);

    cout << " Con il ciclo do-while la somma delle cifre e':" << somma1;




    return 0;
}





    

