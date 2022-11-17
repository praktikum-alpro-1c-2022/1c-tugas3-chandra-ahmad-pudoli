#include <iostream>

using namespace std;

int main(){
    // deklarasi variabel
    int praktikum = 75, uts = 70, uas = 88;
    float total;

    // print
    cout << "nilai praktikum: " << praktikum << endl;
    cout << "nilai uts: " << uts << endl;
    cout << "nilai uas: " << uas << endl;

    // rumus
    total = (praktikum * 20/100) + (uts * 30/100) + (uas * 50/100);

   // hasil akhir
   cout << "nilai akhir mahasiswa dari praktikum, uts, uas adalah: " << total << endl;

   return 0;
}
