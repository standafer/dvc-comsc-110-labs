#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    // Seed the seed
    srand(time(0));

    int tosses;
    bool tossesValid = false;
    while (tossesValid != true) {
        cout << "Enter the number of tosses to perform: ";
        cin >> tosses;

        // Sanity checks
        if (tosses > 0) {
            tossesValid = true;
        } else {
            cout << endl << "Must be greater than or equal to 0." << endl;
        }
    }

    int count = 0;
    while (count < tosses) {
        switch((rand() % 2)) {
            case(0): cout << "Heads" << endl; break;
            case(1): cout << "Tails" << endl; break;
            default: cout << "Impossible case" << endl; break;
        }
        count++;
    }
}
