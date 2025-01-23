/*****************************************************
* Author:         Ethan Standafer
* Assignment:     7.6 Programming Lab 8
* Course:         COMSC-110-8174
* Date:           11/25/2024
*****************************************************/

#include <iostream>
using namespace std;

const string WEEKDAYS[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
// City + state
const string LOCATION = "Vallejo, California";

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

// Single source of truth since we now have two functions that
// rely off of the same iteration to date + weekday mappings
string getFormattedDate(int i) {
    int date = (25 + i);
    string weekday = WEEKDAYS[i + 1];

    return weekday + ", November " + to_string(date) + getOrdinal(date);
}

// 1 = "once"
// n = "{n} times"
string getFormattedQuantity(int num) {
    if (num == 1) {
        return "once";
    }
    return to_string(num) + " times";
}

int main() {
    const int TEMPER_SIZE = 5;
    int temperatures[TEMPER_SIZE];

    for (int i = 0; i < TEMPER_SIZE; i++) {
        cout << "Enter the high for " << LOCATION << " on " << getFormattedDate(i) << ": ";

        int temperature = 0;
        cin >> temperature;

        temperatures[i] = temperature;
    }

    cout << endl << LOCATION << " forecast high temperatures:" << endl;

    int minTemp = temperatures[0],
        minTempOcc = 0,
        maxTemp = temperatures[0],
        maxTempOcc = 0;

    for (int i = 0; i < TEMPER_SIZE; i++) {
        // Note: the i + 1 here is because the 25th is a Monday
        // so there needs to be a fixed offset of 1
        int temperature = temperatures[i];

        if (temperature == minTemp) minTempOcc++;
        if (temperature == maxTemp) maxTempOcc++;
        if (temperature < minTemp) {
            minTemp = temperature;
            minTempOcc = 1;
        }
        if (temperature > maxTemp) {
            maxTemp = temperature;
            maxTempOcc = 1;
        };

        cout << getFormattedDate(i) << ": " << temperature << " degrees" << endl;
    }

    cout << endl <<
        "The high for the week is " << maxTemp << " degrees, occuring " << getFormattedQuantity(maxTempOcc) << endl <<
        "The low for the week is " << minTemp << " degrees, occuring " << getFormattedQuantity(minTempOcc) << endl <<
        "source: google weather";
}
