/*  • Chiedi all'utente di inserire un numero intero positivo.
    • Verificare e stampare se il numero è primo.
    • Nota: un numero è primo se è divisibile solo per 1 e per sé stesso.
    • Scrivere sia la versione con il costrutto while che con il costrutto do-while.*/


    #include <iostream>
    using namespace std;

    int main() {

        //esercizio con il ciclo while

        int numero;
        cout << "Inserisci un numero intero positivo" << endl;
        cin >> numero;

        int i = 2;
        bool isPrimo = true;

        while(i < numero){
            
            if(numero % i == 0){
                isPrimo = false;
            }

            i++;
           
        }

        if (isPrimo == false){
            cout << "Non e' un numero primo (while)" << endl;
        } else if (isPrimo == true){
            cout << "Il numero e' primo (while)" << endl;
        } 


        //esercizio con il ciclo do-while

        int numero;
        cout << "Inserisci un numero intero positivo" << endl;
        cin >> numero;

        int i = 2;
        bool isPrimo = true;


        
        if(numero == 2){
            cout << "Il numero e' primo";
            return 0;
        }
        
        do{
           

          if(numero % i == 0) {
             isPrimo = false;
        
          }

            i++;

        } while (i < numero);

         if (isPrimo == false){
            cout << "Non e' un numero primo (do-while)" << endl;
        }else if (isPrimo == true){
            cout << "Il numero e' primo (do-while)" << endl;
        }
     
        
    return 0;
        
}