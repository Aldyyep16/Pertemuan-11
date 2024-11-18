#include <iostream>
using namespace std;

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }

void urutMenurun(int *arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(*(arr + i) < *(arr + j)) {
                tukar((arr + i), (arr + j));
            }
        }
    }
}
  int main () {
    int n;
    int *arr = new int(n);

    cout << "Masukkan Jumlah Elemen : ";
    cin >> n;

    cout << "Masukkan Elemen-Elemen array: \n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke - " << i + 1 << " : ";
        cin >> arr[i];
        }
        cout << endl;

        urutMenurun(arr, n);

        cout << "Array setelah disusun menurun : ";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        delete[] arr;

        return 0;
  }


