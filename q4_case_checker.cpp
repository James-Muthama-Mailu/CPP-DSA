#include <iostream>
using namespace std;

void checkCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is UPPERCASE" << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is lowercase" << endl;
    } else {
        cout << ch << " is not an alphabet character" << endl;
    }
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    checkCase(ch);

    return 0;
}