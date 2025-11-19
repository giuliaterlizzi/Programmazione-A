/* -Chiedere all'utente di inserire un numero intero positivo
   -Sommare e stampare tutti i numeri pari da 0 fino a quel numero
   -Infine, stampare la somma finale
   -Scrivere sia la versione con il while che con il do-while-*/

   #include <iostream>
   using namespace std;

   int main() {

    int numero;

    cout << "Inserisci un numero intero positivo" << endl;
    cin >> numero;

    int i = 0;
    int somma = 0;

    while(i <= numero){

        if(i % 2 == 0){
            
            somma = somma + i;    
        }
           
        i++;
      
    }cout << "La somma con il ciclo while e':" << " "<<somma << endl;
  


    int numero2;

    int j = 0;
    int somma2 = 0;

      cout << "Inserisci un numero intero positivo" << endl;
      cin >> numero2;

      do{ 

           if ( j % 2 == 0){
            somma2 = somma2+j;
        }
      
        j++;

      }while ( j <= numero2 );
      
      cout << "La somma con il ciclo do-while e':" << " "<<somma2 << endl;

     


     








    return 0;
   
}