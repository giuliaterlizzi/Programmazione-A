// Inserire tre numeri e calcolare la media.

#include <iostream>
using namespace std;

int main() {

    int x, y, z;
    cout << "Inserisci 3 numeri"<< endl;
    cin >> x >> y >> z;

    float m;
    m = (x+y+z)/3.0;

    cout << "La media e'" << m <<endl;


    return 0;
}