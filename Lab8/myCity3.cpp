/*****************************************************
* Author:         Ethan Standafer
* Assignment:     7.6 Programming Lab 8
* Course:         COMSC-110-8174
* Date:           11/25/2024
*****************************************************/

#include <iostream>
using namespace std;

string getOrdinal(int num) {
    // Note: See https://stackoverflow.com/a/13627586/13157115 for
    // implementation details. Ported from JavaScript to C++

    int j = num % 10;
    int k = num % 100;

    if (j == 1 && k == 11) {
        return "st";
    } else if (j == 2 && k != 12) {
        return "nd";
    } else if (j == 3 && k != 13) {
        return "rd";
    }

    // Base case
    return "th";
}

int main() {
    string WEEKDAYS[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    const int TEMPER_SIZE = 5;
    int temperatures[TEMPER_SIZE] = {56, 58, 59, 58, 58};

    cout << "Vallejo, California forecast high temperatures:" << endl;

    // It IS possible to sort the array, then take the first and last values of the
    // array, however, I feel like it's a waste of compute time, since we're already
    // doing an iteration over the array
    //
    // By approaching it this way, it stays O(N)
    // Note: this has no check to see if index 0 of temperatures actually exists,
    // this shouldn't be an issue so long as the temperatures array is properly
    // initialized
    int minTemp = temperatures[0], maxTemp = temperatures[0];

    for (int i = 0; i < TEMPER_SIZE; i++) {
        // Note: the i + 1 here is because the 25th is a Monday
        // so there needs to be a fixed offset of 1
        int date = (25 + i);
        int temperature = temperatures[i];
        string weekday = WEEKDAYS[i + 1];

        // It might be useful in the future to store the index
        // instead of the value in case we want to reference
        // the day as well as the minimum and maximum temperatures
        if (temperature < minTemp) minTemp = temperature;
        if (temperature > maxTemp) maxTemp = temperature;

        cout << weekday << ", November " << date << getOrdinal(date) << ": " << temperature << " degrees" << endl;
    }

    cout << endl <<
        "The high for the week is " << maxTemp << " degrees" << endl <<
        "The low for the week is " << minTemp << " degrees" << endl <<
        "source: google weather";
}
