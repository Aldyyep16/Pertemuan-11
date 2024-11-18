#include <iostream>
using namespace std;

bool compareString(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }
    if (str1[i] != '\0' || str2[i] != '\0') {
        return false;
    }
    return true;
}

int main() {
    char str1[] = "hello";
    char str2[] = "hello";
    if (compareString(str1, str2)) {
        cout << "string sama" << endl;
    } else {
        cout << "string tidak sama" << endl;
    }

    return 0;
}
