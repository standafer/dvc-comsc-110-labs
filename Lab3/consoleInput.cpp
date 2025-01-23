#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(1000, 10);

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    double outsideTemperature;
    cout << "Enter the temperature outside right now (degrees F): ";
    cin >> outsideTemperature;
    cin.ignore(1000, 10);

    string currentCity;
    cout << "What city are you in right now? ";
    getline(cin, currentCity);

    cout << endl << name << " is " << age << " years old." << endl << "It's " << outsideTemperature << " degrees F in " << currentCity << ".";
}
