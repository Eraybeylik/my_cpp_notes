#include <iostream>
using namespace std;


// while döngüsü
// while döngüsü, belirli bir koşul sağlandığı sürece döngüyü devam ettirir.
// while döngüsü, koşul sağlanmadığı zaman döngüden çıkılır.

int main () {

    int n=0;
    while(n < 10)
    {
        cout << "n: " << n << endl;
        n++;
    }
    cout << "döngüden çıkıldı" << endl;
    
    return 0;
}

// do while döngüsü
// do while döngüsü, en az bir kez çalışır ve ardından koşulu kontrol eder.
// do while döngüsü, koşul sağlandığı sürece döngüyü devam ettirir.

int main () {
    
    int n=0;
    do
    {
        cout << "n: " << n << endl;
        n++;
    } while (n < 10);



}


// for döngüsü
// for döngüsü, belirli bir sayıda döngü çalıştırmak için kullanılır.
// for döngüsü, başlangıç değeri, koşul ve artış/değişim değerini belirler.


int main () {
    
    for (int n=0; n < 10; n++)
    {
        cout << "n: " << n << endl;
        if (n==6)
        {
            continue; // continue, döngünün o anki iterasyonunu atlar ve bir sonraki iterasyona geçer.
        }

        if (n==5)
        {
           break; // break, döngüyü tamamen sonlandırır.
        }
        
        
    }
    cout << "döngüden çıkıldı" << endl;
    
    return 0;
}