#include <iostream>
using namespace std;

int main() {
    // Had to look it up on StackOverflow to get the degree symbol to show.
    // Caveat: Not sure if it works properly on Windows, only tested on Mac.
    const char* degreeSymbol = "\u00B0";

    float tempC;
    cout << "What's the temperature in " << degreeSymbol << "C? ";
    cin >> tempC;
    cin.ignore(1000, 10);

    float tempF = ((9.0 / 5.0) * tempC) + 32;
    cout << tempC << degreeSymbol << "C equals " << tempF << degreeSymbol << "F";

    return 0;
}
