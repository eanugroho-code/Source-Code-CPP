#include <iostream>

using namespace std;
 
int main()
{
  cout << "##  Tugas 4 Program C++ Menentukan Ganjil-Genap  ##" << endl;
  cout << "====================================================" << endl;

  cout << "nama          : eko ari nugroho"<< endl;
  cout << "nim           : 5520122022"<< endl; 
  cout << endl;
  cout << "====================================================" << endl;
  int angkabilangan;
	cout<<"Menentukan Genap dan Ganjil"<<endl;
	cout<<"Silahkan Masukan Angka : "<<endl;
cin>>angkabilangan;
	cout<<endl;
  
  cout << "=========================MAKA!======================" << endl;

  if (angkabilangan%2==0){
		    cout << "Angka "<<angkabilangan<<" Adalah bilangan genap"<<endl;
	     }else {
		    cout << "Angka "<<angkabilangan<<" Adalah bilangan ganjil"<<endl;	
	     }


  cout << "====================================================" << endl;
  cout << endl;
  return 0;

}
