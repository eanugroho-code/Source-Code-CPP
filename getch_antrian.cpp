#include <iostream>
#include <conio.h> //MENGGUNAKAN GETCH()
#define MAX 5 //MAKSIMAL NOMOR ANTRIAN

using namespace std;

int nomer[MAX];
int awal=-1, akhir=-1;

bool IsEmpty() { // = -1
    if(akhir == -1) {
        return true;
    } else {
        return false;
    }
}
bool kuotaAntrianpenuh() { //  = MAX-1
    if(akhir == MAX-1) {
        return true;
    } else {
        return false;
    }
}
void AntrianMasuk(int no) {
    if (IsEmpty()) {
        awal=akhir=0;
    } else {
        akhir++;
    }
    nomer[akhir]=no;
}
void AntrianKeluar() {
    if(IsEmpty()) {
        cout<<"Antrian sudah kosong ! ";
        getch();
    } else {
        for(int a=awal; a<akhir; a++) {
            nomer[a]=nomer[a+1];
        }
        akhir--;
        if(akhir == -1) {
            awal = -1;
        }
    }
}

void Clear() {
    awal=akhir=-1;
}
void View() {
    if(IsEmpty()) {
        cout<<"Antrian kosong ! ";

    } else {
        for(int a=awal; a<=akhir; a++) {
            cout << "==============================="
                 << "\n >> No. Antri : [" << nomer[a] << "]"
                 << "\n==============================="<< endl;
        }
    }
}

int main() {

    int pilihan, p=1, urut;
    do {
        cout << "\n\n===== PROGRAM ANTRIAN C++ ====="
             << "\n==============================="
             << "\n|1. Cetak Ticket Antrian      |"
             << "\n|2. Panggilkan Antrian        |"
             << "\n|3. Lihat Daftar Antrian      |"
             << "\n|4. Hapus Semua Daftar Antri  |"
             << "\n|5. Exit                      |"
             << "\n===============================";
        cout << "\nPilih angka ! ";
        cin >> pilihan;
        cout << "\n\n";
        if(pilihan == 1) {
            if(kuotaAntrianpenuh()) {
                cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
            }
            else {
                urut=p;
                AntrianMasuk(urut);
                cout <<"            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
                cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀            " << endl;
                cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⢹⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀            " << endl;
                cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⡟⠹⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀            " << endl;
                cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⠟⢁⡈⠻⣿⣦⣨⣿⣿⣶⣤⣤⣴⣦⡀⠀⠀            " << endl;
                cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⠟⢁⣴⣿⣿⣦⡈⠻⣿⣯⡈⠻⢿⣿⣿⣿⣿⠆⠀            " << endl;
                cout <<"⠀⠀⠀⠀⠀⠀⢀⣴⣿⠟⢁⣴⣿⣿⣿⣿⣿⣿⣦⡈⠻⣿⣶⣿⠿⢿⠟⠁⠀⠀            " << endl;
                cout <<"⠀⠀⠀⠀⢀⣴⣿⠟⢁⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠆⢈⣿⣿⠆⠀⠀⠀⠀⠀            " << endl;
                cout <<"⠀⠀⢀⣴⣿⣟⠁⠰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢁⣴⣿⠟⠁⠀⠀⠀⠀⠀⠀            " << endl;
                cout <<"⠀⠰⣿⣿⣿⣿⣷⣦⡈⠻⣿⣿⣿⣿⣿⣿⠟⢁⣴⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀            " << endl;
                cout <<"⠀⠀⠈⠻⠟⠛⠛⠿⣿⣦⡈⠻⣿⣿⠟⢁⣴⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀            " << endl;
                cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣆⠈⢁⣴⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀            " << endl;
                cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣿⣷⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀            " << endl;
                cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀            " << endl;
                cout <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀            " << endl;
                cout << "----------------------------------" << endl;
                cout << "|          Tiket Antrian          |" << endl;
                cout << "|              No. " << p << "             ||" << endl;
                cout << "----------------------------------" << endl;
                p++;
            }
        }
        else if(pilihan == 2) {
            cout << "=================================" << endl;
            cout << "Antrian Dengan Nomor Ticket : [" << nomer[awal] << "]";
            cout << "\n=================================" << endl;
            AntrianKeluar();
            cout << "         Silahkan ke loby !        " << endl;
            cout << "\n=================================" << endl;
        }
        else if(pilihan == 3) {
            View();
        }
        else if(pilihan == 4) {
            Clear();
            cout<<"Antrian dikosongkan ! ";
        }
        else if(pilihan == 5) {
        }
        else {
            cout << "Masukan anda salah ! \n"<< endl;
        }
        getch();
    } while(pilihan!=5);
}
