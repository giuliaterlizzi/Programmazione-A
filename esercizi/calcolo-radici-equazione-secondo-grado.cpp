/*Esercizio CALCOLO DELLE RADICI DI UN'EQUAZIONE DI 2° GRADO
    -Chiedi all'utente di inserire i coefficienti a,b,c di un'equazione di 2º grado della forma ax^2+bx+c = 0.
    -Usando solo il costrutto if, determinare:  
        1. Se l'equazione ha due soluzioni reali (delta > 0 ). Applicare la formula per determinare le soluzioni di x1, x2.
        2. Se ha una soluzione reale ( delta = 0 ). Applicare la formula per determinare la soluzione di x.
        3. Se non ci sono soluzioni reali ( delta < 0 ) . Stampare non ci sono soluzioni reali.
    -Calcolare e stampare le soluzioni, se esistono.
    -Formula del determinante: b^2 - 4ac */


#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a;
    int b;
    int c;
    float determinante;

    cout << "Inserisci i coefficienti dell'equazione di secondo grado"<< endl;
    cin >> a>>b>>c;

    
    determinante = (b * b) - (4 * a * c);
    cout << "Il determinante ha valore:"<< determinante << endl; 

    float x;
    float x1;
    float x2;
    

    if(determinante > 0){
        
        x1 = (-b + sqrt (determinante)) / (2* a);
        

        x2 = (-b - sqrt (determinante)) / (2 * a);
        
        cout << "Il determinate e' > 0, ha due soluzioni reali:"<< " "<< "x1 =" << " "<< x1 << " " << "e" << " " << "x2 =" << " "<< x2 << endl;

    }else if (determinante == 0){
        
        x = (-b)/(2*a);
        cout << " Il determinante e' = 0, ha una soluzione reale:" << " "<<"x = "<< x << endl;
        
    }else{

        cout <<" Il determinante e' < 0, non ci sono soluzioni reali.";
    }


    return 0;
}



