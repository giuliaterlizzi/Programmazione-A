/* -chiedi all'utente di inserire un numero intero positivo
   -contare e stampare i divisori di quel numero (inclusi 1 e il numero stesso)
   -scrivere sia la versione con il while e sia con il do-while */

   #include <iostream>
   using namespace std;

   int main() {

    int numero;
    cout << "Inserisci un numero intero positivo" << endl;
    cin >> numero;

    int divisori = 0;
    int i = 1;

    cout << "I divisori di" << " " << numero << " " << "con il ciclo while sono:";
    
    while (i <= numero){

        if(numero % i == 0){
            
          cout <<" "<<i;
          divisori++;
         
        }
        
        i++;
    }
    cout <<endl;
  
    cout << "Totale:" <<divisori;



    int numero2;
    cout << "Inserisci un numero intero positivo" << endl;
    cin >> numero2;

    int divisori2 = 0;
    int i2 = 1;

     cout << "I divisori di" << " " << numero2 << " " << "con il ciclo do-while sono:";
    

    do{

        if (numero2 % i2 == 0){

            cout <<" "<<i2;
            divisori2++;

        }

        i2++;
    }while( i2 <= numero2);

    cout <<endl;
    cout <<"Totale:"<<divisori2;



    return 0;
   }