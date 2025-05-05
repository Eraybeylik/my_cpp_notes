#include <iostream>
using namespace std;


int main () {

    int min, max, toplam = 0;

    cout << "Küçük sayıyı girin: ";
    cin >> min;
    cout << "Büyük sayıyı girin: ";
    cin >> max;

    if(min < max){
        while(min + 1 < max) {
            toplam += (min+1);
            min++;
        }
    }
    else if (min == max) {
        cout << "Küçük sayı büyük sayıya eşit olamaz." << endl;
        return 1; // Hata durumu
    }
    else if (min > max) {
        cout << "Küçük sayı büyük sayıdan büyük olamaz." << endl;
        return 1; // Hata durumu
    }

    cout << "Toplam: " << toplam << endl;

    return 0;
}