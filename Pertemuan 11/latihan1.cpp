#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan ukuran array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen " << i + 1 << ": ";
        cin >> arr[i];
    }

    int *ptr = arr;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += *(ptr + i);
    }

    cout << "Jumlah seluruh elemen array adalah: " << sum << endl;

    return 0;
}

