#include <iostream>
#include <conio.h>
using namespace std;
struct fullname {
    string namadepan;
    string namabelakang;
};
struct siswa {
    fullname nama;
    string jurusan;
    int id;
    float IPK;
};
siswa UIM[10];
int main()
{
    int i;
    int n;
    int cari,ketemu=0;
    int ID[100];

    cout << "##  Tugas 7 Program C++ Sekuensial/linear Search  ##" << endl;
    cout << "====================================================" << endl;
    cout << endl;
    cout << "nama          : Eko Ari Nugroho"<< endl;
    cout << "nim           : 5520122022"<< endl;
    cout << endl;
    cout << "====================================================" << endl;
    cout << endl;

    cout<<"Masukan Banyak Data : ";
    cin>>n;
    cout<<endl;

    for (i=1; i<=n; i++)
    {
        cout << "=========================================" << endl;
        cout<<"DATA MAHASISWA ke  "<<i<<endl;
        cout << "=========================================" << endl;
        cout << endl;
        cout<<"Nama depan : ";
        cin>>UIM[i].nama.namadepan;
        cout<<"Nama belakang : ";
        cin>>UIM[i].nama.namabelakang;
        cout<<"Jurusan : ";
        cin>>UIM[i].jurusan;
        cout<<"No Induk Mahasiswa : ";
        cin>>UIM[i].id;
        cout<<"Masukkan IPK : ";
        cin>>UIM[i].IPK;
    }
    cout << endl;
    cout << "=========================================" << endl;
    cout << endl;

    for (i=1; i<=n; i++)
    {
        cout<<endl<<endl<<"Siswa Universitas Indonesia Mandiri ke "<<i<<endl;
        cout << "=========================================" << endl;
        cout << endl;
        cout<<"Nama :"<<UIM[i].nama.namadepan<<" "<<UIM[i].nama.namabelakang<<endl;
        cout<<"Jurusan :"<<UIM[i].jurusan<<endl;
        cout<<"No Induk Mahasiswa :"<<UIM[i].id<<endl;
        cout<<"IPK :"<<UIM[i].IPK<<endl;

          
    }
    cout << endl;
    cout << "=========================================" << endl;
    cout << endl;

    cout<<endl;
    cout<<"Cari Nomor Induk Mahasiswa : ";
    cin>>cari;
    cout<<"--------------------------"<<endl;
    cout<<endl;

    for(i=0; i<=n; i++)
    {
        if (UIM[i].id==cari)
        {
            ketemu=1;
            cout<<"Data Ditemukan Pada Indeks Ke-"<<i;
            
        }
    }
    if (ketemu==0)
    {
        cout<<"Data tidak ditemukan";
    }
    getch();
}
