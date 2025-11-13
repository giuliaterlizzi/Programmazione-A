/*Esercizio DIFFERENZA TRA TRE NUMERI
    -chiedi all'utente di inserire tre numeri interi
    -calcolare e stampare la differenza tra il numero maggiore e il numero minore
    -è possibile utilizzare solo il costrutto condizionale if*/

 #include <iostream>
 using namespace std;

 int main() {

    int numero1;
    int numero2;
    int numero3;
    int differenza;

    cout << "inserisci 3 numeri interi" << endl;
    cin >> numero1 >> numero2 >> numero3;

    if(numero1 > numero2 && numero2 > numero3){
        cout << "il massimo e'" << " "<< numero1 <<" "<< "il minimo e'" << numero3 << endl;
         differenza = numero1 - numero3;
         cout << "La differenza tra il massimo e il minimo e':"<< differenza;

    }else if (numero1 > numero3 && numero3 > numero2){
        cout << "il massimo e'"<<" "<< numero1 <<" "<< "il minimo e'" << numero2 << endl;
         differenza = numero1- numero2;
         cout << "La differenza tra il massimo e il minimo e':" << differenza;

    }else if(numero2 > numero1 && numero1 > numero3){
        cout <<"il massimo e'"<<" "<< numero2 <<" "<<"il minimo e'"<< numero3 << endl;
        differenza = numero2 - numero3;
        cout << "La differenza tra il massimo e il minimo e':" << differenza;

    }else if(numero2 > numero3 && numero3 > numero1){
        cout << "il massimo e'" <<" "<< numero2 <<" "<< "il minimo e'" << numero1 << endl;
        differenza = numero2 - numero1;
        cout << "La differenza tra il massimo e il minimo e':"<< differenza;
    
    }else if(numero3 > numero1 && numero1 > numero2){
        cout << "il massimo e'" << " "<< numero3 << " " << "il minimo e'" << numero2 << endl;
        differenza = numero3 - numero2;
        cout << "La differenza tra il massimo e il minimo  e':" << differenza;

    }else if(numero3 > numero2 && numero2 > numero1){
        cout << "il massimo e'" <<" "<< numero3 <<" "<< "il minimo e'" << numero1 << endl;
        differenza = numero3 - numero1;
        cout << "La differenza tra il massimo e il minimo e':" << differenza;
    
    }

    return 0;
 }

 /* Una versione più elegante ed efficiente
 
         #include <iostream>
         using namespace std;

        int main() {
            
            int a, b, c;

            cout << "Inserisci il primo valore: ";
            cin >> a;

            cout << "Inserisci il secondo valore: ";
            cin >> b;

            cout << "Inserisci il terzo valore: ";
            cin >> c;

            int max = a;
            int min = a;

            if(b > max)
                 max = b;
            if(c > max)
                max = c;

            if(b < min)
                 min = b;
            if(c < min)
                 min = c;

            int risultato = max - min;

            cout << "Risultato: " << risultato << endl;

       return 0;
}
       */