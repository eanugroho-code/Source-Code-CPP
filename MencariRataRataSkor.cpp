#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
    cout << "=========== Tugas 3 ===========" << endl;
    
    string nama;
    int i, nilai, data[50];
    float rata,jum;
    
    
    cout << "Rata-rata Skor pertandingan" << endl; 
    cout << "Nama Peserta : ";
    getline(cin,nama);
    
    cout<<"Total Pertandingan = ";
    cin>>nilai;
    cout<<endl;
    
    for (i=0; i<nilai; i++)
        {
           cout<<"Skor Pertandingan ke-"<<i+1<<" = ";
           cin>>data[i];
           jum += data[i];
        }
        
    rata=jum/nilai;
        
    cout<<endl;
    
    cout << "Peserta yang bernama " << nama << endl;
    cout<<"dengan total skor pertandingan = "<<jum<<endl;
    cout<<"memperoleh skor Rata-rata = "<<rata<<endl;
  getch();
  }
