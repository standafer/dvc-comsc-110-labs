#include <iostream>
#include <string>
using namespace std;

int main() {
    string vegetarian, vegan, glutenFree;

    cout << "Is anyone in your party a vegetarian? ";
    cin >> vegetarian;
    cout << "Is anyone in your party a vegan? ";
    cin >> vegan;
    cout << "Is anyone in your party gluten-free? ";
    cin >> glutenFree;

    cout << "\nHere are your restaurant choices:\n";

    if (vegetarian == "no" && vegan == "no" && glutenFree == "no")
        cout << "Joe’s Gourmet Burgers\n";

    if (vegan == "no" && glutenFree == "no")
        cout << "Mama’s Fine Italian\n";

    if (vegan == "no")
        cout << "Main Street Pizza Company\n";

    cout << "Corner Cafe\n";
    cout << "The Chef’s Kitchen\n";

    return 0;
}
