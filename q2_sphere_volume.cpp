#include <iostream>
#include <cmath>  // for pow()
using namespace std;

int main() {
    double radius;
    const double PI = 3.14159265358979;

    cout << "Enter radius of sphere: ";
    cin >> radius;

    double volume = (4.0 / 3.0) * PI * pow(radius, 3);
    cout << "Volume of sphere = " << volume << endl;

    return 0;
}