#include <iostream>
using namespace std;

int hitungGenap(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int jumlahGenap = hitungGenap(arr, n);

    cout << "Jumlah elemen genap : " << jumlahGenap << endl;

    return 0;
}
