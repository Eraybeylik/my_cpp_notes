#include <iostream>
using namespace std;

// Özyineli fonksiyonlar
// Özyineli fonksiyonlar, kendilerini çağıran fonksiyonlardır.
// Özyineli fonksiyonlar, genellikle bir problemi daha küçük alt problemlere bölmek için kullanılır.
// Özyineli fonksiyonlar, genellikle bir durdurma koşuluna sahip olmalıdır.
// Aksi takdirde sonsuz döngüye girerler.

int f (int a){

    if (a > 1)
        return a * f(a - 1); // Özyineli çağrı
    else
        return 1; // Durdurma koşulu
}

int main(){

    cout << "5! = " << f(5) << endl;

    return 0;
}