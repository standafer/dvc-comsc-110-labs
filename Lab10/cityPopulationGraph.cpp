#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct PopulationYear {
    int year;
    int population;
};

const int DATA_SIZE = 6;
const PopulationYear DATA[DATA_SIZE] = {
    { .year =  1922, .population = 2000 },
    { .year =  1942, .population = 5000 },
    { .year =  1962, .population = 6000 },
    { .year =  1982, .population = 9000 },
    { .year =  2002, .population = 14000 },
    { .year =  2022, .population = 17000 },
};

string makeAsterisks(int num) {
    string compiled = "";
    for (int i = 0; i < num; i++) {
        compiled += "*";
    }
    return compiled;
}

int main() {
    for (int i = 0; i < DATA_SIZE; i++) {
        PopulationYear popYear = DATA[i];

        int asterisks = floor(popYear.population / 1000);
        cout << popYear.year << ", " << makeAsterisks(asterisks) << endl;
    }
}
