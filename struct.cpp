#include <iostream>

using namespace std;

struct fullname {
    string namadepan;
    string namabelakang;
};
struct siswa {
    fullname nama;
    string jurusan;
    string id;
    float IPK;
};
siswa UIM[10]; 
int main () 
{

cout << "##  Tugas 6 Program C++ Data Struct/ Record  ##" << endl;
cout << "=========================================" << endl;
cout << endl;
cout << "nama          : Eko Ari Nugroho"<< endl;
cout << "nim           : 5520122022"<< endl;
cout << endl;
cout << "=========================================" << endl;
cout << endl;
int n,i;
 cout<<"Masukkan banyak data : [angka] :";
cin>>n;
cout << endl;
cout << "=========================================" << endl;
cout << endl;
cout << "  ##  Universitas Indonesia Mandiri  ##. " << endl;
cout << endl;
cout << "=========================================" << endl;
cout << endl;
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


  
return 0;

}
    
