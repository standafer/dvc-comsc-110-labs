#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    // Seed the seed
    srand(time(0));

    bool escape = true;
    while (escape) {
        int input;
        bool inputValid = false;
        while (inputValid != true) {
            cout << "Enter the number of tosses to perform [0=exit]: ";
            cin >> input;

            if (input == 0) {
                escape = false;
                break;
            } else if (input > 0) {
                inputValid = true;
            } else {
                cout << endl << "Must be greater than 0." << endl;
            }
        }

        for (int i = 0; i < input; i++) {
            switch((rand() % 2)) {
                case(0): cout << "Heads" << endl; break;
                case(1): cout << "Tails" << endl; break;
                default: cout << "Impossible case" << endl; break;
            }
        }
    }
}
