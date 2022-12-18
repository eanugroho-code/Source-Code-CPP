#include <iostream>
#include <string>
#include <stdlib.h> // library system()
#include <time.h> // library srand
#include <conio.h> // library getch()

using namespace std;
int main()
{
awal:
    int n;
    string nama[100];
    string lihatAngg;
    srand(time(0));
    int acak, add;

    system("cls");
    cout << "-------------------------------------------------------" << endl;
    cout << "+               Bahasa Pemrograman C++                +" << endl;
    cout << "+  Progam Koclokan/Acak nama di Arisan by ismynr.xyz  +" << endl;
    cout << "-------------------------------------------------------\n" << endl;
    cout << "=======================================================" << endl;
    cout << "  Masukan angka yang ikut ! \n  Berapa nama yang akan di masukan : ";
    cin >> n;
    cout << "=======================================================\n" << endl;
    for(int a=0; a<n; a++) {
        cout << "  Nama ke-[" << a+1 << "] : ";
        cin >> nama[a];
    }
    cout << endl;

    system("pause");
    acak = rand() % n;
    cout << "\n\n=======================================================" << endl;
    cout << "               Selamat untuk [" << nama[acak] << "]" << endl;
    cout << "                   Kamu Menang !!" << endl;
    cout << "=======================================================\n" << endl;
    system("pause");
    system("cls");

lihatA:
    cout << "Lihat Anggota [y/t] ? ";
    cin >> lihatAngg;
    if (lihatAngg == "y") {
        cout << endl;
        for(int a=0; a<n; a++) {
            cout << "  Nama ke-[" << a+1 << "] : " << nama[a] << endl;
        }
    }
    else if(lihatAngg == "t") {}
    else {
        cout << "Silahkan Ulangi !" << endl;
        goto lihatA;
    }

pilih:
    cout << "\n1. Acak Anggota Lagi " << endl;
    cout << "2. Reset Dan Kembali Ke atas " << endl;
    cout << "3. Keluar " << endl;
    cout << "Pilihanmu >> ";
    cin >> add;

    if (add == 1) {
        acak = rand() % n;
        cout << "\n\n=======================================================" << endl;
        cout << "               Selamat untuk [" << nama[acak] << "]" << endl;
        cout << "                   Kamu Menang !!" << endl;
        cout << "=======================================================\n" << endl;
        getch();
        goto pilih;
    }
    else if(add == 2) {
        goto awal;
    }
    else if(add == 3) {
        system("cls");
        cout << "Terima Kasih telah menggunakan program ini " << endl;
        system("pause");
    }
    else {
        cout << "Pilihan Salah, Silahkan Ulangi !" << endl;
        getch();
        goto pilih;
    }
}
