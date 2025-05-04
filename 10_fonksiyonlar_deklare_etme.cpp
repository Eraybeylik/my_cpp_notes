#include <iostream>
using namespace std;

// Fonksiyon deklarasyonu

int us_al(int taban, int us); // fonksiyonun prototipi

int main(){

    int taban;
    int us;

    cout << "Us alma islemi" << endl;  
    cout << "Taban: ";
    cin >> taban;

    cout << "Us: ";
    cin >> us;
    cout << "Sonuc: " << us_al(taban, us) << endl; // fonksiyonun çağrılması

    return 0;
}

int us_al(int taban, int us)
{
    int sonuc = 1;
    for(int i=0; i < us; i++)
    {
        sonuc=sonuc*taban;
    }
    return sonuc;
}

