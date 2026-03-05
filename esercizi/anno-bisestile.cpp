/*Si scriva un programma che legga da input un anno 
  e determini se esso è bisestile secondo le regole: un anno è 
  bisestile se è divisibile per 4 ma non per 100,
  oppure se è divisibile per 400. Stampare il risultato 
  (“Anno bisestile” o “Anno non bisestile”)*/

 #include <iostream>
 using namespace std;

 int main() {

    int anno;

    cout <<"Inserisci l'anno" << endl;
    cin >>anno;

    if ((anno % 4 == 0 && anno % 100 != 0) ||(anno % 400 == 0 )){ /*anno divisibile per 4 ma non per 100
                                                                    oppure divisibile per 400*/
        cout <<"Anno bisestile"<<endl;
    }else{
    cout<<"Anno non bisestile"<<endl;
    }


    return 0;
 }