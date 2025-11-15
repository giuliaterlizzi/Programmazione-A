 /* scrivere un programma che prende in input una distanza 
 in chilometri e la converta in miglia (1 km = 0.621371 miglia)*/

  #include <iostream>
  using namespace std;

  int main() {

    float km;
    cout << "Inserisci una distanza in km" <<endl;
    cin >> km;

    float miglia = km * 0.621371;
    cout <<"La distanza convertita in miglia e':"<< " "<< miglia;

    return 0;
  }