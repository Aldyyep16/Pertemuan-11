#include <iostream>
using namespace std;

void cetakterbalik(char *str) {
char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--;
    while (end >= str) {
        cout << *end;
        end--;
    }
    cout << endl;
}

int main() {
    char str[] = "C++ Programming";
    cetakterbalik(str);
    return 0;
}
