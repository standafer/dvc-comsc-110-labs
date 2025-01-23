#include <iostream>
using namespace std;

const int SCORES_LEN = 5;
int scoresMain[SCORES_LEN] = {};

void getScore(int index, string nth) {
    int input;
    cout << "Enter the " << nth << " test score: ";
    cin >> input;

    // Do validation
    bool valid = false;
    string errMessage;
    if (input < 0) {
        errMessage = "a negative test score was entered, and negative test scores are not allowed.";
    } else if (input >  100) {
        errMessage = "a test score greater than 100 was entered, and test scores greater than 100 are not allowed.";
    } else {
        valid = true;
    }

    if (valid == false) {
        cout << endl << "The program stopped because " << errMessage << endl;

        // Early exiting
        // Doing this because it's in the program requirements, usually you
        // wouldn't want to put an exit inside of a function
        exit(0);
    }

    scoresMain[index] = input;
};

int findLowest(int scores[SCORES_LEN]) {
    int lowest = scores[0];

    for (int i = 1; i < SCORES_LEN; i++) {
        int current = scores[i];
        if (current < lowest) {
            lowest = current;
        }
    }
    return lowest;
};

void calcAverage(int scores[SCORES_LEN]) {
    bool droppedLowest = false;
    int lowest = findLowest(scores);

    float average = 0;
    for (int i = 0; i < SCORES_LEN; i++) {
        int score = scores[i];
        if (score == lowest && !droppedLowest) {
            // Doing this in case there are duplicate lowest scores
            // in which case it would drop more than one score
            droppedLowest = true;
            continue;
        }
        average += score;
    }
    // (- 1) to account for the dropped score
    average /= (SCORES_LEN - 1);

    cout << endl << "Average of the five test scores (with lowest score dropped) is " << average;
};

int main() {
    getScore(0, "first");
    getScore(1, "second");
    getScore(2, "third");
    getScore(3, "fourth");
    getScore(4, "fifth");
    calcAverage(scoresMain);
}
