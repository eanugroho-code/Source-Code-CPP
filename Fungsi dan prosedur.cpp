//Prosedur
#include <iostream>
#include <string>

using namespace std;

string firstName = "Nama depan";
string lastName = "Nama Belakang";
    
string fullName()
{
    return firstName + " " + lastName;
}

void printName(string firstName, string lastName)
{
    cout << "Nama saya adalah  " << lastName;
}






int main()
{

 
    printName(firstName, lastName);
    cout << "\nNama lengkap saya adalah " << fullName();
 
    return 0;
}
