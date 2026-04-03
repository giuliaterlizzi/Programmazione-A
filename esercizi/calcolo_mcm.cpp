/*• Chiedi ll'utente di inserire due numeri interi positivi.
  • Calcolare e stampare il minimo comune multiplo dei due numeri.
  • È possibile utilizzare solo il costrutto while(true). */

  #include <iostream>
  using namespace std;

  int main() {

    int num1;
    int num2;

    cout << "Inserisci due numeri interi positivi" << endl;
    cin >> num1 >> num2;

    int mcm = 1;

    while (true) {

        if(mcm % num1 ==0 && mcm %num2 == 0){
            cout << "Il minimo comune multiplo di" << " " << num1 <<" "<< "e" << " " << num2 << " " << "e':" << mcm;
            break;
        }

      
      mcm++;
    }

    return 0;
  }