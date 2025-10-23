/*Si scriva un programma che legga da input due numeri 
interi e verifichi se il primo è divisibile per il secondo
 (senza resto), stampando un messaggio appropriato 
 (“è divisibile” o “non è divisibile”) */

 #include <iostream>
 using namespace std;

 int main() {

    int numero1;
    int numero2;

    cout <<"Inserisci il primo numero"<<endl;
    cin >>numero1;

    cout <<"Inserisci il secondo numero"<<endl;
    cin >>numero2;
    
    if (numero1 % numero2 == 0 ){
    cout <<"E' divisibile"<<endl;
    }else{
    cout <<"Non e' divisbile"<<endl;
    }

    
    return 0;
 }    


