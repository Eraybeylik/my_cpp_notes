#include <iostream>
using namespace std;

// switch-case
// switch-case, belirli bir değişkenin değerine göre farklı durumları kontrol etmek için kullanılır.
// switch-case, belirli bir değere göre farklı kod bloklarını çalıştırır.
// switch-case, genellikle if-else yapısına göre daha okunaklı ve anlaşılırdır.

int main () {

    int number;
    cout << "Bir sayı girin(1-3): ";
    cin >> number;

    switch (number)
    {
        case 1:
            cout << "Bir" << endl;
            break;
        case 2:
            cout << "İki" << endl;
            break;
        case 3:
            cout << "Üç" << endl;
            break;
        default:
            cout << "Bilinmeyen bir sayı." << endl;
            break;
    }
    return 0;
}