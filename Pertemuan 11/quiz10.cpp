#include <iostream>
using namespace std;

void indeksTerbalik(int *arr, int n) {

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    indeksTerbalik(arr, n);
    return 0;
}

