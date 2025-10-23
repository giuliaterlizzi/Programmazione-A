/*Dato un carattere minuscolo in input, stampare a video
 il corrispondente carattere maiuscolo.*/

 #include <iostream>
 using namespace std;

 int main() {

    char minuscolo;
    
    cout <<"Inserisci un carattere minuscolo"<<endl;
    cin >> minuscolo;


    char maiuscolo = minuscolo - 32; //differenza tra carattere minuscolo e maiuscolo tavola ASCII
    cout << "Il carattere corrispondente maiuscolo e':"<< maiuscolo;


    return 0;
 }