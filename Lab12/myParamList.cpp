#include <iostream>
using namespace std;

double calcAverage(int a, int b, int c) {
    double result = 0.0;
    result = (a + b + c) / 3.0;
    return round(result * 100) / 100;
} // calcAverage

int main() {
    // Inputs
    int x, y, z;
    cout << "Enter the first whole number: ";
    cin >> x;
    cout << "Enter the second whole number: ";
    cin >> y;
    cout << "Enter the third whole number: ";
    cin >> z;

    // Output
    cout << "The average is: " << calcAverage(x, y, z);
} // main
