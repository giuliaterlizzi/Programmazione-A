/*richiedi all’utente il prezzo di un oggetto e la percentuale di sconto ad esso applicata,
 e che stampi a video il cartellino con il prezzo (originale e scontato).*/

 #include <iostream>
 using namespace std;

 int main(){

    float prezzo;
    float percentuale;

    cout <<"Inserire il prezzo dell'oggetto"<<endl;
    cin >> prezzo;

    cout <<"Inserisci la percentuale di sconto"<<endl;
    cin >> percentuale;

    cout <<"Cartellino:"<<endl;
    cout <<"Prezzo:"<< " "<< prezzo <<endl;
    cout <<"Sconto applicato:"<< " "<< percentuale << "%" <<endl;
    
    float sconto = (prezzo / 100) * percentuale;
    float scontofinale = (prezzo - sconto);
    cout <<"Prezzo finale:"<< " "<< scontofinale << endl;


    return 0;
 }