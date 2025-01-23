#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    // Seed the seed
    srand(time(0));

    switch((rand() % 2) + 1) {
        case(1): cout << "Heads"; break;
        case(2): cout << "Tails"; break;
        default: cout << "Impossible case"; break;
    }
}
