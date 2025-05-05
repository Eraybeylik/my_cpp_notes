#include <iostream>
using namespace std;

// Diziler
// Diziler, aynı türden birden fazla veriyi tek bir isim altında saklamamızı sağlar.
// Diziler, sabit boyutlu ve değişken boyutlu olmak üzere ikiye ayrılır.


int main(){

    int dizi[5]; // 5 elemanlı bir tamsayı dizisi tanımlıyoruz.
    // Dizinin elemanlarını kullanıcıdan alıyoruz.
    for (int i = 0; i < 5; i++){
        cout << "Dizinin " << i + 1 << ". elemanını girin: ";
        cin >> dizi[i];
    }

    cout << "Dizinin elemanları: ";
    // Dizinin elemanlarını ekrana yazdırıyoruz.
    for (int i = 0; i < 5; i++){
        cout << dizi[i] << " ";
    }
    cout << endl;

    

    return 0;
}

// Çok boyutlu diziler

int main(){

    int dizi[3][4]; // 3 satır ve 4 sütundan oluşan bir tamsayı dizisi tanımlıyoruz.
    // Dizinin elemanlarını kullanıcıdan alıyoruz.
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << "Dizinin [" << i << "][" << j << "] elemanını girin: ";
            cin >> dizi[i][j];
        }
    }

    cout << "Dizinin elemanları: " << endl;
    // Dizinin elemanlarını ekrana yazdırıyoruz.
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << dizi[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}