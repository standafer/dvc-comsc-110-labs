#include <iostream>
using namespace std;

// In hindsight, I did not need to implement the "strict" logic
int inputIntegerSafe(int minimum, bool strict) {
    int input = 0;
    bool valid = false;

    while (!valid) {
        cin >> input;
        if (strict && input >= minimum) valid = true;
        if (!strict && input >= minimum) valid = true;

        if (valid == false) {
            cout << "Must be greater than " << (strict ? "or equal to" : "") << " " << minimum << endl;
        }
    }

    return input;
}

int calculateDistance(int rate, int time) {
    return rate * time;
}

int main() {
    int speed, distanceTraveled;

    // Inputs
    cout << "What is the speed of the vehicle in MPH? ";
    speed = inputIntegerSafe(0, false);
    cout << "How many hours has it traveled? ";
    distanceTraveled = inputIntegerSafe(1, false);

    // Header
    cout << endl << "Hours\tDistance Traveled" << endl << "==============================" << endl;

    // Table content
    for (int i = 1; i <= distanceTraveled; i++) {
        cout << i << "\t" << calculateDistance(speed, i) << endl;
    }
}
