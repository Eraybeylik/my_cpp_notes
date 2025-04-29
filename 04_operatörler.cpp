#include <iostream>
using namespace std;

// ARİTMETİK OPERATÖRLER
// +, -, *, /, %

int main() {
    int a = 10;
    int b = 3;

    cout << "a + b = " << a + b << endl; // Toplama
    cout << "a - b = " << a - b << endl; // Çıkarma
    cout << "a * b = " << a * b << endl; // Çarpma
    cout << "a / b = " << a / b << endl; // Bölme
    cout << "a % b = " << a % b << endl; // Mod alma

    return 0;
}


// BİRLEŞİK OPERATÖRLER
// +=, -=, *=, /=, %=

int main() {
    int a = 10;
    int b = 3;

    a += b; // a = a + b
    cout << "a += b: " << a << endl;

    a -= b; // a = a - b
    cout << "a -= b: " << a << endl;

    a *= b; // a = a * b
    cout << "a *= b: " << a << endl;

    a /= b; // a = a / b
    cout << "a /= b: " << a << endl;

    a %= b; // a = a % b
    cout << "a %= b: " << a << endl;

    return 0;
}

// KARŞILAŞTIRMA OPERATÖRLERİ
// ==, !=, >, <, >=, <=

int main() {
    int a = 10;
    int b = 3;

    cout << "a == b: " << (a == b) << endl; // Eşit mi?
    cout << "a != b: " << (a != b) << endl; // Eşit değil mi?
    cout << "a > b: " << (a > b) << endl; // Büyük mü?
    cout << "a < b: " << (a < b) << endl; // Küçük mü?
    cout << "a >= b: " << (a >= b) << endl; // Büyük veya eşit mi?
    cout << "a <= b: " << (a <= b) << endl; // Küçük veya eşit mi?

    return 0;
}

// MANTIKSAL OPERATÖRLER
// &&, ||, !

int main() {
    bool a = true;
    bool b = false;

    cout << "a && b: " << (a && b) << endl; // Ve
    cout << "a || b: " << (a || b) << endl; // Veya
    cout << "!a: " << (!a) << endl; // Değil

    return 0;
}

// ARTTIRMA VE AZALTMA OPERATÖRLERİ
// ++, --
int main() {
    int a = 10;

    cout << "a: " << a << endl;
    cout << "a++: " << a++ << endl; // Önce yazdırır, sonra artırır
    cout << "a: " << a << endl;

    cout << "++a: " << ++a << endl; // Önce artırır, sonra yazdırır
    cout << "a: " << a << endl;

    cout << "a--: " << a-- << endl; // Önce yazdırır, sonra azaltır
    cout << "a: " << a << endl;

    cout << "--a: " << --a << endl; // Önce azaltır, sonra yazdırır
    cout << "a: " << a << endl;

    return 0;
}

// KOŞUL OPERATÖRÜ
// ? :
int main() {
    int a = 10;
    int b = 3;

    // Koşul operatörü
    int max = (a > b) ? a : b; // a büyükse a, değilse b
    cout << "Max: " << max << endl;

    return 0;
}
