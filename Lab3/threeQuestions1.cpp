#include <iostream>
using namespace std;

int main() {
    string correctStr = "Good work -- your answer is correct!";
    string incorrectStr = "Nice job, but a better answer is ";

    int ans1;
    cout << "1 + 2 = ";
    cin >> ans1;
    cout << ((ans1 == 3) ? correctStr : incorrectStr + "3.") << endl << endl;

    int ans2;
    cout << "100 - 99 = ";
    cin >> ans2;
    cout << ((ans2 == 1) ? correctStr : incorrectStr + "1.") << endl << endl;

    int ans3;
    cout << "12 + 21 = ";
    cin >> ans3;
    cout << ((ans3 == 33) ? correctStr : incorrectStr + "33.");

    return 0;
}
