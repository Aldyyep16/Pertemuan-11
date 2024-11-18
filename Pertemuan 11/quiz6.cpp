
#include <iostream>
using namespace std;
int main() {
 int arr[3] = {5, 10, 15};
 int *ptr = arr;

 cout << "Elemen pertama: " << *ptr << endl;

 ptr++;
 cout << "Elemen kedua: " << *ptr << endl;

 return 0;
}
