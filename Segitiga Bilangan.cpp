#include <iostream>
using namespace std;

int main() {
    int angka;
    cin >> angka;

    if (angka >= 1 && angka < 10){
        for (int a = angka; a > 0; a--){
            for (int b = 0; b < a; b++){
                cout << a << " ";
                }
            cout << endl;
            }
        } else cout << "Bilangan tidak sesuai!";
    
    return 0;
}