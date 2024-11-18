#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Masukkan ukuran array pertama: ";
    cin >> n1;
    int arr1[n1];
    cout << "Masukkan elemen array pertama:\n";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }

    cout << "Masukkan ukuran array kedua: ";
    cin >> n2;
    int arr2[n2];
    cout << "Masukkan elemen array kedua:\n";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    bool arrai = false;
    cout << "Elemen yang sama antara kedua array adalah: ";
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            if (*(arr1 + i) == *(arr2 + j)) {
                if (!arrai) {
                    cout << *(arr1 + i);
                    arrai = true;
                } else {
                    cout << " " << *(arr1 + i);
                }
                break;
            }
        }
    }

    if (!arrai) {
        cout << "Tidak ada elemen yang sama.";
    }

    cout << endl;
    return 0;
}
