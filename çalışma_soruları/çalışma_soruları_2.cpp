#include <iostream>
using namespace std;

int main () {
    int age;
    string gender;

    string K = "K";
    string E = "E";

    cout << "Yaşınızı giriniz: ";
    cin >> age; // Kullanıcıdan bir sayı al
    cout << "Cinsiyetinizi giriniz (K veya E): ";
    cin >> gender; // Kullanıcıdan bir karakter al


    if (age < 18 || gender == K) {
        cout << "Askere gidemezsiniz." << endl;
    } else if (age >= 18 && gender == E) {
        cout << "Askere gidebilirsiniz." << endl;
    } else if (age < 18 && gender == E) {
        cout << "Askere gitmek için 18 yaşında veya üstünde olmalısınız." << endl;
    } else {
        cout << "Cinsiyet veya yaş bilgisi geçersiz." << endl;
    }
   

}