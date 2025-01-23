#include <iostream>
using namespace std;

int main() {
    // Header
    cout << "Temperatures From Celsius To Fahrenheit" << endl << "=======================================" << endl;

    for (int i = 0; i < 3; i++) {
        // Get the celcius temperature from the index
        float tempC = 0;
        switch(i) {
            case(0): tempC = -40; break;
            case(1): tempC = 0; break;
            case(2): tempC = 100; break;
        }

        // Then, from that celcius temperature, convert to fahrenheit
        float tempF = (tempC * (9.0 / 5.0)) + 32;

        // Finally, output both the original celcius temperature along
        // with the fahrenheit temperature
        cout << tempC << " C\t\t" << tempF << " F" << endl;
    }

    return 0;
}
