// Yorum satırı

/* Birden çok kısmı yorum satırı yapar  */

#include <iostream> // kütüphane ekleme komutu
using namespace std; // std isim alanını kullanır. Yani bu komutu girdikten sonra std:: yazmaya gerek kalmaz.
main(){

}

// main fonksiyonu, programın başlangıç noktasıdır

// Bu mainin başına int,bool,void gibi veri türleri eklenebilir

// int: tam sayı
// bool: mantıksal veri türü (true/false)
// void: geri dönüş değeri olmayan fonksiyonlar için kullanılır

int main(){
    
    std::cout << "Merhaba, Dünya!" << std::endl; // Konsola "Merhaba, Dünya!" yazdırır 
    
    //std:endl: satır sonu karakteri ekler böylece boşluk bırakmış oluruz.

    return 0; // 0 değeri döndürülür, bu programın başarılı bir şekilde çalıştığını gösterir
}