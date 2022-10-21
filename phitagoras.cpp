#include <iostream>
#include <math.h>

using namespace std;

int main(){
    // deklarasi variabel
    int panjangsisialas = 8, sisitinggi = 10;
    float sisimiring;

    // rumus
    sisimiring = (panjangsisialas*panjangsisialas)+(sisitinggi*sisitinggi);
    sisimiring = sqrt(sisimiring);

    // hasil akhir
    cout << "==========\n";
    cout << "sisi miring dari panjang sisi alas 8cm dan sisi tinggi 10cm segitiganya adalah: " << sisimiring << endl;

  return 0;
}
