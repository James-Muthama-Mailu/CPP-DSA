#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    double values[SIZE];
    double sum = 0;

    // Loop to input 5 values into the array
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> values[i];
        sum += values[i];
    }

    double average = sum / SIZE;
    cout << "Average = " << average << endl;

    return 0;
}