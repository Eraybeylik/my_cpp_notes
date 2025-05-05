#include <iostream>
using namespace std;

int main() {

    // Kullanıcıdan yaş bilgilerini alıyoruz.
    int age[5];
    for (int i = 0; i < 5; i++){
        cout << i + 1 << ". kişinin yaşını girin: ";
        cin >> age[i];
    }

    // Yaşların toplamını hesaplıyoruz.
    int sum = 0;
    for (int i = 0 ; i < 5 ; i++){
        sum += age[i];
    }

    // Yaş ortalamasını hesaplıyoruz.
    double average = sum / 5.0;
    cout << "Yaş ortalaması: " << average << endl;

    return 0;
}