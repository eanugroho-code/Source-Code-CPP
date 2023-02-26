#include<iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {

    string nama;
    char pilihan;
    bool lanjut = true;

    int kembalian,tunai,pilih[100],jumlah[100],sub_total[100],harga[100],total_bayar;
    string menu[100],tenor[100];
    int i=0;
    bool selesai=false;
    
    cout << "=========================================" << endl;
    cout << "                                         " << endl;
    cout << "           Journey BeutyBar              " << endl;
    cout << "         Memanjakanmu selamanya          " << endl;
    cout << "                                         " << endl;
    cout << "=========================================" << endl;
    cout << "                 SERVICE                 " << endl;
    cout << "=========================================" << endl;

    cout << "***           Hair Styling            ***" << endl;
    cout << "=========================================" << endl;
    cout << "1. Hair Cut                   Rp. 105.000" << endl;
    cout << "2. Wash & Blow Dry             Rp. 30.000" << endl;
    cout << "3. Extra Vitamin               Rp. 15.000" << endl;
    cout << "=========================================" << endl;
    cout << "***             Treatment             ***" << endl;
    cout << "=========================================" << endl;
    cout << "4. Creambath                   Rp. 75.000" << endl;
    cout << "5. Hair Spa                    Rp.100.000" << endl;
    cout << "6. Scrub Ketombe               Rp. 70.000" << endl;
    cout << "=======================================\n" << endl;
    cout << "***                SPA                ***" << endl;
    cout << "=========================================" << endl;
    cout << "7. Body Message               Rp. 195.000" << endl;
    cout << "8. Body Spa                   Rp. 265.000" << endl;
    cout << "9. Body Spa + lulur           Rp. 395.000" << endl;
    cout << "=======================================\n" << endl;
    cout << "Nama Pelanggan ? " ;
    getline(cin,nama);
    cout<< endl;
    while (selesai == false) {
        cout << endl;
        cout << "Masukan Nomor Pesanan : (tekan 0 jika sudah) "<<endl;
        cout <<"=>";
        cin >> pilih[i];

        if (pilih[i]<=9) {

            if (pilih[i]==0) {
                selesai = true;
            }
            else {
                switch (pilih[i]) {
                case 1 :
                    menu[i] = "Hair Cut";
                    harga[i] = 105000;
                    break;
                case 2 :
                    menu[i] = "Wash & Blow Dry";
                    harga[i] = 30000;
                    break;
                case 3 :
                    menu[i] = "Extra Vitamin";
                    harga[i] = 15000;
                    break;
                case 4 :
                    menu[i] = "Creambath";
                    harga[i] = 75000;
                    break;
                case 5 :
                    menu[i] = "Hair Spa";
                    harga[i] = 100000;
                    break;
                case 6 :
                    menu[i] = "Scrub Ketombe";
                    harga[i] = 70000;
                    break;
                case 7 :
                    menu[i] = "Body Message";
                    harga[i] = 195000;
                    break;
                case 8 :
                    menu[i] = "Body Spa";
                    harga[i] = 265000;
                    break;
                case 9 :
                    menu[i] = "Body Spa + Lulur";
                    harga[i] = 395000;
                    break;
                default :
                    menu[i] = " ";
                    harga[i] = 0;

                }

                cout<<"=>"<<menu[i]<<endl;
               

                cout<<endl;

                sub_total[i]=harga[i];

                total_bayar+=sub_total[i];
                i++;
            }
        } else {
            cout<<"Menu yang dipilih tidak sesuai"<<endl;
            cout<<endl;
        }
      
    }
    cout << "=======================================\n" << endl;
    cout<<"Total Bayar =              Rp."<<total_bayar<<endl;
    cout << "=======================================\n" << endl;
    cout << "Tunai: "; cin >> tunai;
    
    if (tunai < total_bayar) {
      cout << "Uang anda tidak cukup" << endl;
      
   }

   kembalian = tunai - total_bayar;
   
    cout << "=======================================\n" << endl;
   
    time_t t = time(NULL);
    struct tm *now = localtime(&t);
    cout<<endl;
    cout << "-----------------------------------------"<<endl;
    cout << "                                         " << endl;
    cout << "           Journey BeutyBar              " << endl;
    cout << "          INVOICE PEMBAYARAN             "<<endl;
    cout << "                                         " << endl;
    cout << "-----------------------------------------"<<endl;
    for (int a=0; a<i; a++) {
        cout<<a+1<<"  "<<menu[a]<<"  sub :   "<<sub_total[a]<<endl;
    }

    cout << "-----------------------------------------"<<endl;
    cout<<"Total Bayar =              Rp."<<total_bayar<<endl;
    cout<<"Tunai       =              Rp."<<tunai<<endl;
    cout<<"Kembalian   =              Rp."<<kembalian<<endl;

    cout << "-----------------------------------------"<<endl;

    cout<<endl;
    cout << "         tgl   "<< (now->tm_year + 1900) << '-'
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday << endl;
    cout << "       Member :     "<< nama  <<endl;
    cout << "-----------------------------------------"<<endl;
  

}
