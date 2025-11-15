/*preso in input un intero positivo n, stampare un triangolo 
rettangolo di asterischi di lato n */

#include <iostream>
using namespace std;

int main() {

    int n;
    cout <<" Inserisci un numero intero positivo"<<endl;
    cin >> n;

    int i = 0;
    
    while(i < n){

        int j = 0;

        while(j < i+1){
        cout <<'*';
        j++;
    }
    cout << endl;
    i++;
}


    return 0;
}