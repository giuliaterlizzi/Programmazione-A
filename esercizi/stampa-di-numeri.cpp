/*Scrivi un programma che stampa i numeri da
  1 a 10 usando diversi cicli (do-while, while) */

  #include <iostream>
  using namespace std;

  int main() {

    int numero = 1;
    int numero2 = 1;

    
    int i = 11;
    while(numero < i){
      cout << numero << " ";
      numero++;
    }
    cout << "Ciclo while"<<endl;


    int j = 11;
    do {
      cout << numero2 <<" ";
      numero2++;

    }while (numero2 < j);

    cout << "Ciclo do-while"<<endl;

  
  return 0;
  }