/*Si scriva un programma che chiede all'utente di inserire
 un numero; se il numero è pari, si calcoli il quadrato 
 di quel numero, altrimenti si calcoli il cubo. 
 Infine, si stampi il risultato a schermo. */

 #include <iostream>
 using namespace std;
 #include <cmath>

 int main() {

    int numero;

    cout <<"inserisci un numero"<<endl;
    cin>>numero;

    if (numero % 2 == 0){ //numero pari
        cout<< (int)pow(numero,2) <<endl;

    }else{ 
    cout <<(int)pow(numero,3) <<endl;
    }

    return 0;
 }