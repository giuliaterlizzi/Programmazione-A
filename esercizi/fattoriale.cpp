/*Si scriva un programma che legga da input 
un numero intero positivo n e calcoli il suo fattoriale n!.*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout <<"Inserisci un numero"<<endl;
    cin >>n;


    int i = 1;
    int fattoriale = 1;
    while(n >= i ){
       fattoriale = fattoriale * i;
        i++;

    }
    cout <<" il fattoriale e del"<<" "<< n<<" "<< "e'"<< fattoriale;


    return 0;
}