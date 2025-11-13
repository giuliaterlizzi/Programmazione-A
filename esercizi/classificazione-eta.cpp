/* Esercizio CLASSIFICAZIONE DELL'ETA'
    -chiedi all'utente di inserire una età
    -determinare se l'età è di un bambino (età<12), di un adolescente (età tra 12 e 17),
     di un adulto (età tra 18 e 64), o di un anziano (età >= 65), e stampare la categoria corrispondente.
    -è possibile utilizzare solo il costrutto condizionale if. */

 #include <iostream>
 using namespace std;

 int main() {

    int eta;

    cout << "Inserisci un'eta'" <<endl;
    cin >> eta;

    if (eta < 12){
        cout << " l'eta' e' quella di un bambino"<<endl;

    }else if (eta >= 12 && eta <= 17 ){
        cout << " l'eta' e' di un adolesente"<<endl;

    }else if (eta >= 18 && eta <= 64){
        cout << "L'eta' e' di un adulto" <<endl;

    }else if (eta >= 65){
        cout <<" l'eta' e' di un anziano"<<endl;
    }


    return 0;
 }