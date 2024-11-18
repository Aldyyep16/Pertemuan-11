#include <iostream>
using namespace std;
int main() {
 int x = 42;
 int *ptr = &x;


 cout << "Nilai dari x: " << *ptr << endl;
 cout << "Alamat dari x: " << ptr << endl;

 return 0;
}
