#include <iostream>
using namespace std;

int main() {
    int age = 0;
    cout << "How old are you?" << endl;
    cin >> age;
    cin.ignore(1000, 10);

    if (age < 18) { //          (-inf, 18)
        cout << "Hello Wonderful Future!";
    } else if (age < 70) { //   [18, 70)
        cout << "Hello Fantastic Person!";
    } else { //                 [70, inf)
        cout << "Hello Most Venerable Senior!";
    }
}
