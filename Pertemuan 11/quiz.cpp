#include <iostream>
using namespace std;

int hitungPangkat(int bil, int pangkat) {
    int hasil = 1;
    for (int i = 0; i < pangkat; i++) {
        hasil *= bil;
    }
    return hasil;
}

int main() {
    int bil, pangkat;
    cout << "Masukkan bilangan: ";
    cin >> bil;
    cout << "Masukkan pangkat: ";
    cin >> pangkat;

    int hasil;
    if (pangkat == 0) {
        hasil = 1;
    } else {
        hasil = hitungPangkat(bil, pangkat);
    }
    cout << "Hasil: " << hasil << endl;

    return 0;
}
