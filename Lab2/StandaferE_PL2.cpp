#include <iostream>
using namespace std;

int main() {
    string firstName;
    cout << "What is your first name? ";
    getline(cin, firstName);

    string lastName;
    cout << "What is your last name? ";
    getline(cin, lastName);

    int streetNumber;
    cout << "What is your street number? ";
    cin >> streetNumber;
    cin.ignore(1000, 10);

    string streetName;
    cout << "What is your street name? ";
    getline(cin, streetName);

    string city;
    cout << "What city do you live in? ";
    getline(cin, city);

    string state;
    cout << "What state do you live in? ";
    cin >> state;
    cin.ignore(1000, 10);

    string ZIPCode;
    cout << "What's your postal ZIP code? ";
    cin >> ZIPCode;
    cin.ignore(1000, 10);

    cout << endl << firstName << " " << lastName << endl << streetNumber << " " << streetName << endl << city << ", " << state << "  " << ZIPCode;

    return 0;
}
