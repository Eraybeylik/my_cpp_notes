#include <iostream>
using namespace std;

int main (){
    int number;
    cout << "Bir sayı girin: ";
    cin >> number;

    for (int i=(number/2); i>1; i--){
    
        if (number%i == 0)
        {
            cout << number << " sayısı asal değildir." << endl;
            break;
        }
        else
        {
            cout << number << " sayısı asaldır." << endl;
            break;
        }

    }
    return 0;
}