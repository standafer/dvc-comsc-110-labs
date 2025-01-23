#include <iostream>
using namespace std;

void additionProblem(int topNumber, int bottomNumber) {
    int userAnswer;
    cout << "\n\n\n      " << topNumber << " + " << bottomNumber << " = ";
    cin >> userAnswer;
    cin.ignore(1000, 10);

    int theAnswer = topNumber + bottomNumber;
    if (theAnswer == userAnswer)
    cout << "      Correct!" << endl;
    else
    cout << "      Very good, but a better answer is " << theAnswer << endl;

} // additionProblem

int main() {
    srand(time(0));

    for (int i = 0; i < 5; i++) {
        int a = (rand() + 1) % 10;
        int b = (rand() + 1) % 10;
        additionProblem(a, b);
    }
} // main
