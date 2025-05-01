#include <iostream>
using namespace std;

// Fonksiyon tanımı

int topla(int say1, int say2){
    int toplam;
    toplam = say1 + say2;
    return toplam;
}

int main(){

    cout << "Toplam: " << topla(5, 10) << endl;



    return 0;
}