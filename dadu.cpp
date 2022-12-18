#include <iostream>
#include <stdlib.h> // Library rand() atau randem
#include <conio.h>
#include <time.h> // Library untuk srand(time(0))
using namespace std;

struct dataPemain {
    int jmlPemain;
    string pemain[4];
} P;

int randomDadu() {
    srand(time(0));
    return rand()%6;
}
void Header() {
    cout << "   dadu PROGRAM  " << endl;
    cout << "---------------------------------" << endl;
}
void inputPemain() { // Untuk Input Pemain
    for(int a=0; a<P.jmlPemain; a++) {
        cout << "Pemain " << a+1 << " = ";
        cin >> P.pemain[a];
    }
}
int main() {
    Header();
    do {
        cout << "Berapa Yang Ingin Main [MAX 4] ? ";
        cin >> P.jmlPemain;
    } while(P.jmlPemain > 4);

    cout << "Masukan nama pemain !" << endl;
    inputPemain();
    cout << endl << endl;

    while(true) {
        for(int a=0; a<P.jmlPemain; a++) {
            cout << "===============" << endl;
            cout << " Dadu : <["<< P.pemain[a] << "]>"<< endl;
            cout << "===============" << endl;
            cout << "=      " << randomDadu()+1 << "      = " << endl;
            cout << "===============" << endl;
            if(randomDadu()+1 == 6) {
                cout << "<[" << P.pemain[a] << "]> Kamu main lagi ! ";
                getch();
                cout << endl<< endl;
                cout << "===============" << endl;
                cout << " Dadu : <["<< P.pemain[a] << "]>"<< endl;
                cout << "===============" << endl;
                cout << "=      " << randomDadu()+1 << "      = " << endl;
                cout << "===============" << endl;
                if(randomDadu()+1 == 6) {
                    cout << "Anda sudah Kedua kalinya mendapat Dadu 6, maka giliran Lainya ";
                    getch();
                    cout << endl << endl;
                }
            }
            cout << "[ENTER]";
            getch();
            cout << endl << endl;
        }
    }
}
