#include <iostream>

using namespace std;

int main () 
{

cout << "##  Tugas 12 Array ##" << endl;
cout << "=========================================" << endl;
cout << endl;
cout << "nama          : Eko Ari Nugroho"<< endl;
cout << "nim           : 5520122022"<< endl;
cout << endl;
cout << "=========================================" << endl;
cout << endl;
cout << "👇 Array nama Mahasiswa 👇" ;
cout << endl;
  string siswa[6] = {" ", "Eko Ari", "Efi Ero", "Jorgensio", "Gustiawan", "Yusuf"};
  for (int i = 1; i < 6; i++) {
    cout << i << " = " << siswa[i] << "\n";
  }
  return 0;
}
