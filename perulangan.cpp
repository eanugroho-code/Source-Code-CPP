#include <iostream>

using namespace std;
 
int main()
{
  cout << "##  Tugas 5 Program C++  ##" << endl;
  cout << "=========================================" << endl;

  cout << "nama          : eko ari nugroho"<< endl;
  cout << "nim           : 5520122022"<< endl; 
  cout << endl;
  cout << "=========================================" << endl;
    string nama;
    char ulangi = 'y', jenis_kelamin;
    int counter = 0 , umur,ganjil = 1,genap = 2,batasganjil = 20,batasgenap = 20;
  
  cout <<"========Soal Ke-1 Bilangan Ganjil========="<<endl;

  cout<<"Soal Nomer"<< ganjil <<"menghitung 10 bilangan ganjil  " << endl;
	 
	 cout<<"10 Bilangan Ganjil adalah"<<endl;
		      for(int a=ganjil;a<=20;a++)
       		if (a%2!=0)
		      cout << a << ' ';
        
  cout << endl;
  cout << "=========================================" << endl;
  cout <<"========Soal Ke-2 Bilangan Genap=========="<<endl;
  
  cout<<"Soal Nomer" << genap <<"menghitung 10 bilangan genap " << endl;
	 
	 cout<<"10 Bilangan Genap adalah"<<endl;
		      for(int b=genap;b<=20;b++)
		      if (b%2==0)
		      cout << b << ' ' ;

  cout << endl;
  cout << "=========================================" << endl;

  cout <<"===========Soal Ke-3 Perulangan=========="<<endl;
      
     // --- proses input ---
  cout << "Masukan Nama Anda ?" << endl;
  cout << "jawab: ";
  // menyimpan data ke variabel
  getline(cin,nama);
  
  cout << "Usia : ";
  cout << "jawab: ";
  // menyimpan data ke variabel
  cin >> umur;

  

  cout <<"========================================="<<endl;
    // perulangan while
    while(ulangi == 'y'){
    
        cout << "Nama : " << nama <<endl;
        cout << "Usia : " << umur <<endl;
  cout <<"========================================="<<endl;
     
        cout << "Selamat Datang Mas " << nama <<endl;
          
  cout <<"====================================================="<<endl;   
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        cin >> ulangi;

        // increment counter
        counter++;
    }
     
    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
  cout <<"====================================================="<<endl;
    
    return 0;

}
