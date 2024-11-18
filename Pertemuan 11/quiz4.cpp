#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += arr[i];
    }
    cout << "Total semua elemen : " << total << endl;
    return 0;
}
