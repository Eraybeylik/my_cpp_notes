#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Bir sayı giriniz: ";
    cin >> a; // Kullanıcıdan bir sayı al

    if (a % 2 == 0) {
        cout << "Girdiğiniz sayı çift." << endl; // Sayı çiftse
    } else {
        cout << "Girdiğiniz sayı tek." << endl; // Sayı tekse
    }

    return 0;
}
