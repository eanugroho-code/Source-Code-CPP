#include<iostream>
#include <string>
using namespace std;

int main(){
	

	
	int pilih[100],jumlah[100],sub_total[100],harga[100],total_bayar;
	string menu[100];
	int i=0;
	bool selesai=false;
cout << "##  Tugas 15 ##" << endl;
cout << "=========================================" << endl;
cout << endl;
cout << "nama          : Eko Ari Nugroho"<< endl;
cout << "nim           : 5520122022"<< endl;
cout << endl;
cout << "=========================================" << endl;
cout << endl;
	
	cout << "*** DAFTAR MENU  ***" << endl;
    cout << "===============================================" << endl;
    cout << "1. Seblak Ceker                     Rp. 15.000" << endl;
    cout << "2. Bakso Urat.                      Rp. 13.000" << endl; 
    cout << "3. Mie Ayam.                        Rp. 10.000" << endl;
    cout << "===============================================" << endl;
    cout << "4. Es Teh                           Rp. 4.000" << endl;
    cout << "5. Air Mineral                      Rp. 5.000" << endl;
    cout << "6. Nutri Sari                       Rp. 3.000" << endl;  
    cout << "===============================================\n" << endl; 
    cout << "Jika Sudah Selesai Memilih, Silakan Masukan 0" << endl;
    while (selesai == false) { 
        cout << "Masukan Nomor Pesanan Anda : "<<endl;
        cin >> pilih[i];
        if (pilih[i]<=5) {

        if (pilih[i]==0) { 
            selesai = true; 
        }
        else {
            switch (pilih[i]) {
                case 1 : menu[i] = "Seblak Ceker";harga[i] = 15000;
                break;
                case 2 : menu[i] = "Bakso Urat";harga[i] = 13000;
                break;
                case 3 : menu[i] = "Mie Ayam";harga[i] =10000;
                break;
                case 4 : menu[i] = "Es Teh";harga[i] =4000;
                break;
                case 5 : menu[i] = "Air Mineral";harga[i] =5000;
                break;
                case 6 : menu[i] = "Nutri Sari";harga[i] =3000;
                break;
                default : menu[i] = " "; harga[i] = 0;

            }
				
				cout<<"Jumlah Porsi "<<menu[i]<<" : ";
		    	cin>>jumlah[i];
		    	cout<<endl;
		    	
		    	sub_total[i]=jumlah[i]*harga[i];
		    	
		    	total_bayar+=sub_total[i];
	    		i++;
			}
		} else {
			cout<<"Menu yang dipilih tidak sesuai"<<endl;
			cout<<endl;
		}
    
	}
	
	cout<<endl;
	cout<<"                 INVOICE PEMBELIAN "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"No	Nama Menu    	  	Harga		Jumlah        Sub Total "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	for (int a=0;a<i;a++){
		  cout<<a+1<<"	 "<<menu[a]<<" 	"<<harga[a]<<"		"<<jumlah[a]<<"		"<<sub_total[a]<<endl;
	}
	
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"Total Bayar = Rp."<<total_bayar<<endl;
	

}
