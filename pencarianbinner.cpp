#include <iostream>

using namespace std;


int funcbinary (int data[], int n, int nilai)
{
    int awal,akhir,tengah,posisi;
    bool ada;

    ada    = false;
    akhir  = 0;
    awal   = n - 1;
    posisi = -1;

    while (akhir <= awal)
    {
        tengah = (awal + akhir) / 2;
        if (nilai == data[tengah])
        {
            posisi = tengah;
            break;
        }
        else if (nilai < data[tengah]) awal = tengah - 1;
        else if (nilai > data[tengah]) akhir= tengah + 1;
    }
    return posisi;
}






int main ()
{
    cout << "##  Tugas 13 Mencari dat angka 9 ##" << endl;
    cout << "=========================================" << endl;
    cout << endl;
    cout << "nama          : Eko Ari Nugroho"<< endl;
    cout << "nim           : 5520122022"<< endl;
    cout << endl;
    cout << "=========================================" << endl;
    cout << endl;
    int a;
    cout << "Masukan Angka Yang Di Cari : ";
    cin >> a;
    int n         = 11;
    int data[] = {2, 5, 6, 9, 10, 12, 15, 18, 20, 22};
    int nilai      = a;

    int posisi = funcbinary (data,n,nilai);

    if (posisi != -1)
    {
        cout << "ANGKA " << nilai << " ditemukan pada indeks ke-" << posisi << endl;
    }
    else
    {
        cout << "ANGKA " << nilai << " tidak ditemukan" << endl;
    }
    return 0;

}
