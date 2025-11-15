/*si scriva un programma che legga da input tre voti (numeri reali),
 calcoli la media aritmetica e stampi “Promosso” 
 se la media è maggiore o uguale a 18, altrimenti “Bocciato”.
*/
 #include <iostream>
 using namespace std;

 int main() {

    float voto1;
    float voto2;
    float voto3;

    cout <<"Inserire primo voto"<<endl;
    cin >>voto1;
    cout <<"Inserire secondo voto"<<endl;
    cin >>voto2;
    cout <<"Inserire terzo voto"<<endl;
    cin >>voto3;

   float media = (voto1 + voto2 + voto3) /3.0;

   if (media >= 18){
    cout <<"Promosso"<<endl;
   }else
   cout <<"Bocciato"<<endl;


    return 0;
 }