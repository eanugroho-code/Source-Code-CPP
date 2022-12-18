#include <iostream>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
    system("color 5e");
    // Pilihan Player
    int lagi, pilih;
a:
    cout << "===================================" << endl;
    cout << " Selamat datang di GAME SUWIT JAWA " << endl;
    cout << "===================================" << endl << endl;
    cout << " Kamu Pilih ?" << "\n\n";
    cout << " 1. GAJAH, \n 2. SEMUT, \n 3. ORANG" << "\n";
    cout << " Silahkan Pilih  1/2/3 : => ";
    cin >> pilih;
    if(pilih==1)
    {
        cout << "\n Kamu = GAJAH" << endl;
        srand(time(NULL)); // bilangan random/acak
        int com = rand() % 10;
        if (com<=3 && com>=1)
        {
            cout << " Computer = GAJAH" << "\n\n";
            cout << " ==============" << endl;
            cout << " ==> SERI ! <==" << endl;
            cout << " ==============" << endl;
        }
        else if (com<=6 && com>=4)
        {
            cout << " Computer = ORANG" << "\n\n";
            cout << " =====================" << endl;
            cout << " ==> Kamu Menang ! <==" << endl;
            cout << " =====================" << endl;
        }
        else
        {
            cout << " Computer = SEMUT" << "\n\n";
            cout << " ====================" << endl;
            cout << " ==> Kamu Kalah ! <==" << endl;
            cout << " ====================" << endl;
        }
        cout << endl;
    }
    else if(pilih==2)
    {
        cout << "\n Kamu = SEMUT" << endl;
        srand(time(NULL));  // bilangan random/acak
        int com = rand() % 10;
        if (com<=3 && com>=1)
        {
            cout << " Computer = SEMUT" << "\n\n";
            cout << " ==============" << endl;
            cout << " ==> SERI ! <==" << endl;
            cout << " ==============" << endl;
        }
        else if (com<=6 && com>=4)
        {
            cout << " Computer = GAJAH" << "\n\n";
            cout << " =====================" << endl;
            cout << " ==> Kamu Menang ! <==" << endl;
            cout << " =====================" << endl;
        }
        else
        {
            cout << " Computer = ORANG" << "\n\n";
            cout << " ====================" << endl;
            cout << " ==> Kamu Kalah ! <==" << endl;
            cout << " ====================" << endl;
        }
        cout << endl;
    }
    else if(pilih==3)
    {
        cout << "\n Kamu = ORANG" << endl;
        srand(time(NULL));  // bilangan random/acak
        int com = rand() % 10;
        if (com<=3 && com>=1)
        {
            cout << " Computer = ORANG" << "\n\n";
            cout << " ==============" << endl;
            cout << " ==> SERI ! <==" << endl;
            cout << " ==============" << endl;
        }
        else if (com<=6 && com>=4)
        {
            cout << " Computer = SEMUT" << "\n\n";
            cout << " =====================" << endl;
            cout << " ==> Kamu Menang ! <==" << endl;
            cout << " =====================" << endl;
        }
        else
        {

            cout << " Computer = GAJAH" << "\n\n";
            cout << " ====================" << endl;
            cout << " ==> Kamu Kalah ! <==" << endl;
            cout << " ====================" << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "yang anda input salah !!" << endl;
    }

    cout << "pilih lagi = [0] : ";
    cin >> lagi;
b:

    if (lagi == 0)
    {
        system ("cls");
        goto a;
    }
}
