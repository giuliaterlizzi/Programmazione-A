/*Data l’equazione ax + b = 0, scrivere un programma 
per determinare il valore di x, se esiste, che risolve
 l'equazione (a e b devono essere inseriti dall'utente).
  Nel caso non esista alcuna soluzione, stampare un messaggio d'errore.*/

  #include <iostream>
  using namespace std;

  int main() {

    float a;
    float b;
    
    cout <<"Inserisci il valore a:"<<endl;
    cin >> a;
    cout <<"Inserisci il valore b:"<<endl;
    cin >> b;

    if (a == 0 && b != 0){
        cout <<"Non esiste soluzione"<<endl;
         
    }else if (a == 0 && b == 0){
        cout <<"Non esiste soluzione"<<endl;
    }else if(a != 0){
        float x = - b / a;
        cout <<"La soluzione e':"<< " " << x; 
    }



    return 0;
  }