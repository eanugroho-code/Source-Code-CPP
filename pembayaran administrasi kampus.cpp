#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {


    char pilihan;
    bool lanjut = true;

    int pilih[100],jumlah[100],sub_total[100],harga[100],total_bayar;
    string menu[100];
    int i=0;
    bool selesai=false;
    cout << "##  Ujian Akhir Semester ##" << endl;
    cout << "=========================================" << endl;
    cout << endl;
    cout << "nama          : Eko Ari Nugroho"<< endl;
    cout << "nim           : 5520122022"<< endl;
    cout << endl;
    cout << "=========================================" << endl;
    cout << endl;

    while (lanjut) {
        cout << "Apakah Anda Sudah Membayar Formulir? (Y/N): ";
        cin >> pilihan;

        if (pilihan == 'Y' || pilihan == 'y') {
            cout << endl;

            cout<<"👇Silahkan Melanjutkan Administrasi Selanjutnya 👇" << endl;

            cout << "===========Program Angsuran Semester==================" << endl;
            cout << "1. SPP/Bulan           x6           Rp. 400.000" << endl;
            cout << "2. SPb                 x36          Rp. 50.000" << endl;
            cout << "===============================================\n" << endl;
            double spp = 400000, spb=50000;
            double bayarspp = spp * 6;
            double bayarspb = spb * 36;

            cout  << fixed << setprecision(2) << "Total SPP yang harus dibayar dalam 1 semester: " << bayarspp << endl;
            cout << "Total SPB yang Harus Di Bayarkan " << bayarspb<<endl;
            cout << endl;
            cout << "!!! Jika Sudah Selesai Memilih, Silakan Masukan 0 !!!" << endl;


            while (selesai == false) {



                cout << endl;
                cout << "Silahkan Masukan Nomor Pilihan Untuk Melakukan Pembayaran  : "<<endl;
                cin >> pilih[i];
                if (pilih[i]<=2) {

                    if (pilih[i]==0) {
                        selesai = true;
                    }
                    else {
                        switch (pilih[i]) {
                        case 1 :
                            menu[i] = "SPP ";
                            harga[i] = 400000;
                            break;
                        case 2 :
                            menu[i] = "SPb ";
                            harga[i] = 50000;
                            break;
                        default :
                            menu[i] = " ";
                            harga[i] = 0;

                        }

                        cout<<"Ingin Melakukan Pembayaran Untuk Berapa Bulan :"<<menu[i]<<" : ";
                        cin>>jumlah[i];
                        cout<<endl;

                        sub_total[i]=jumlah[i] *harga[i];

                        total_bayar+=sub_total[i];
                        i++;
                    }
                } else {
                    cout<<"Menu yang dipilih tidak sesuai"<<endl;
                    cout<<endl;
                }
            }

            cout<<endl;

            cout<<"-------------------------------------------------------------"<<endl;
            cout<<" INVOICE PEMBAYARAN   "<<endl;
            cout<<"-------------------------------------------------------------"<<endl;
            for (int a=0; a<i; a++) {
                cout<<a+1<<"  "<<menu[a]<<"  "<<harga[a]<<" x    "<<jumlah[a]<<"     sub :    "<<sub_total[a]<<endl;
            }

            cout<<"-------------------------------------------------------------"<<endl;
            cout<<"Total Bayar =                              Rp."<<total_bayar<<endl;
            double sisa_pembayaran = bayarspp + bayarspb - total_bayar;
            if (sisa_pembayaran > 0) {
                cout << "Sisa Pembayaran Cicilan: Rp. " << sisa_pembayaran << endl;
            } else {
                cout << "Tidak ada sisa pembayaran cicilan" << endl;
            }
            cout<<endl;


        } else if (pilihan == 'N' || pilihan == 'n') {
            cout  << endl;
            double formulir=200000, jumlah_uang, kembalian;
            cout << "*** Biaya Administrasi Mahasiswa Baru Universitas Indonesia Mandiri  ***" << endl;
            cout << "===============================================" << endl;
            cout << "1. Formulir .                       Rp. 50.000" << endl;
            cout << "2. Almamater.                       Rp. 150.000" << endl;
            cout << "===============================================\n";
            cout << " Total Yang Harus Di bayarkan.      "<<"Rp. "<<formulir<<endl;
            cout << endl;
            cout << "!!!Silahkan Melakukan Pembayaran Formulir & Almamater!!!"<<endl;

            cout << endl;
            cout << "MASUKAN JUMLAH PEMBAYARAN: ";
            cin >> jumlah_uang;

            // Menghitung kembalian
            kembalian = jumlah_uang - 200000;
            cout << endl;
            if (kembalian >= 0) {
                cout << "=======================================\n";
                cout << "Terima kasih telah melakukan pembayaran" << endl;
                cout << "Kembalian: " << kembalian << endl;
                cout << "=======================================";
                cout << endl;
            } else {
                cout << "Maaf, uang anda tidak mencukupi." << endl;
            }
            cout<<endl;
        } else {
            cout << "Input salah. Silakan coba lagi." << endl;
        }
    }
    return 0;
}
