#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Giriş-Çıkış Komutları
// cout, cin
// cout: Konsola veri yazdırmak için kullanılır.
// cin: Konsoldan veri almak için kullanılır.
// endl: Satır sonu karakteri ekler ve akışı temizler.
// <<: Veri akış operatörü, veriyi akışa ekler.
// >>: Veri akış operatörü, akıştan veri alır.

int main() {
    int a, b;
    cout << "Birinci sayıyı girin: ";
    cin >> a; // Kullanıcıdan bir sayı al
    cout << "İkinci sayıyı girin: ";
    cin >> b; // Kullanıcıdan bir sayı al

    cout << "Toplam: " << a + b << endl; // Toplama işlemi
    cout << "Çarpım: " << a * b << endl; // Çarpma işlemi

    return 0;
}

// Bu kod, kullanıcıdan iki sayı alır ve bu sayıların toplamını ve çarpımını ekrana yazdırır.

// cout ve cin, C++ dilinde veri girişi ve çıkışı için kullanılan temel komutlardır.

// cin sadece tek değişken alır, birden fazla değişken almak için birden fazla cin komutu kullanmalısınız. Yada string kütüphanesindeki getline() fonksiyonunu kullanabilirsiniz.
// getline(): Bir satırdaki tüm karakterleri alır. Bu, boşlukları da içerir.

int main() {
    string name;
    cout << "Adınızı girin: ";
    getline(cin, name); // Kullanıcıdan bir satır al
    cout << "Merhaba, " << name << "!" << endl; // Kullanıcıya selamla

    return 0;
}

// Bu fonksiyonların içerisine ne girersek girelim, hepsini string olarak alır.
// Bu nedenle, eğer bir sayı girersek, bu sayıyı string olarak alır ve ekrana yazdırır.
// Bunu değiştirmek için sstream kütüphanesinin içindeki stringstream fonksiyonunu kullanabiliriz.
// sstringstream: String akışını yönetmek için kullanılır.

int main() {
    string say;
    int a;
    
    cout << "Bir sayı giriniz :" << ""; 
    getline (cin, say); // Kullanıcıdan bir satır al
    stringstream(say) >> a; // String akışını sayıya çevir

    cout << "Girdiğiniz sayı: " << a << endl; // Kullanıcıya selamla
}