#include <iostream>
using namespace std;
int panjangArray(int *arr) {
    int length = 0;
    while (*arr != '\0') {
    length++;
    arr++;
 }
 return length;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int *ptr = arr;
    cout << "Panjang string: " << panjangArray(ptr) << endl;

return 0;
}

