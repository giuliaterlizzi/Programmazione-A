/*Si scriva un programma che chide all'utente di inserire la propria data
 di nascita (solo l'anno) e calcola la sua età, assumendo che l'anno attuale sia 2025.*/

 #include <iostream>
 using namespace std;

 int main() {

    int annonascita;

    cout <<"Inserisci il tuo anno di nascita':"<<endl;
    cin >> annonascita;

    const int AnnoAttuale = 2025;

    int eta = AnnoAttuale - annonascita;

    cout <<"La tua eta' e' di:"<< " " << eta << " " <<"anni"<<endl;


    return 0;
 }