#include <iostream>
using namespace std;

// Global tanımlamalar

int a;
string ab;


int main(){

    // Local tanımlamalar
    int b;

    return 0;
}

int fonksiyon(){
    
    // Global içindeki tanımlanan bir değer herhangi bir fonksiyon içinde kullanılabilir.
    a=10;
    ab="Merhaba";
    
    return 0;
}

// Namespace kavramı
// Namespace, isim çakışmalarını önlemek için kullanılan bir yapıdır.
// Örneğin, bir projede birden fazla kütüphane kullanıyorsanız, bu kütüphaneler içinde aynı isimde fonksiyonlar veya değişkenler olabilir.
// Bu durumda, hangi fonksiyonun veya değişkenin kullanılacağını belirtmek için namespace kullanılır.

namespace deneme{
    int a=10;
    string ab="Merhaba";
}

int main(){
    // Namespace içindeki değişkenlere erişmek için namespace adını kullanabiliriz.
    cout << deneme::a << endl; // 10
    cout << deneme::ab << endl; // Merhaba

    // Global değişkenlere erişim
    a=20;
    ab="Dünya";
    
    cout << a << endl; // 20
    cout << ab << endl; // Dünya

    return 0;
}


// Namespace içindeki fonksiyonlara erişmek için namespace adını kullanabiliriz.
namespace deneme{
    void fonksiyon(){
        cout << "Deneme fonksiyonu" << endl;
    }
}

int main(){
    // Namespace içindeki fonksiyona erişim
    deneme::fonksiyon(); // Deneme fonksiyonu

    return 0;
}

// Namespace alias
namespace deneme{
    int a=10;
    string ab="Merhaba";
}

namespace d=deneme;
int main(){
    // Namespace alias kullanarak daha kısa bir isimle erişim sağlıyoruz.
    cout << d::a << endl; // 10
    cout << d::ab << endl; // Merhaba

    return 0;
}
