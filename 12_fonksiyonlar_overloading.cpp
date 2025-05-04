#include <iostream>
using namespace std;

// Overloading (aşırı yükleme)
// Aşırı yükleme, aynı isimde birden fazla fonksiyon tanımlamaktır.
// Aşırı yükleme, fonksiyonların farklı parametre sayısı veya türü ile tanımlanmasını sağlar.
// Aşırı yükleme, fonksiyonların daha okunabilir ve anlaşılır olmasını sağlar.
// Aşırı yükleme, fonksiyonların daha esnek olmasını sağlar.
// Aşırı yükleme, fonksiyonların daha az kod yazılmasını sağlar.
// Aşırı yükleme, fonksiyonların hata yapma olasılığını azaltır.
// Aşırı yükleme, fonksiyonların daha iyi performans göstermesini sağlar.

int topla(int a, int b){
    return a + b;
}

double topla(double a, double b){
    return a + b;
}

int main(){

    cout << "Toplam: " << topla(5, 10) << endl; 
    cout << "Toplam: " << topla(5.2, 10.5) << endl;

    return 0;
}