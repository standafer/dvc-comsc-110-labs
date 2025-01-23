#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // Initialize random number generator

    const string ROCK = "R";
    const string PAPER = "P";
    const string SCISSORS = "S";

    const string WINNER_NONE = "tie";
    const string WINNER_HUMAN = "human";
    const string WINNER_COMPUTER = "computer";

    int humanWins = 0;
    int computerWins = 0;

    while (true) {
        // RNG computer decision
        int computerRandom = 1 + (rand() % 3);
        // Map to decision
        string computerDecision = "";
        switch(computerRandom) {
            case(1): computerDecision = ROCK; break;
            case(2): computerDecision = PAPER; break;
            case(3): computerDecision = SCISSORS; break;
        }

        // Human input
        cout << "Choose: [Rock,Paper,Scissors,Quit]: ";
        string humanInput;
        cin >> humanInput;
        // Map to decision
        string humanDecision;
        if (humanInput == "R" || humanInput == "r") {
            humanDecision = ROCK;
        } else if (humanInput == "P" || humanInput == "p") {
            humanDecision = PAPER;
        } else if (humanInput == "S" || humanInput == "s") {
            humanDecision = SCISSORS;
        } else if (humanInput == "Q" || humanInput == "q") {
            break;
        }

        string winner = WINNER_NONE;

        if (humanDecision == computerDecision) {
            // Tie, do not change any of the point values
            winner = WINNER_NONE;
        } else {
            // We know it's not a tie, so if we do a comparison, they can
            // never be same, making comparisons unique, which we can advantage
            // by using an OR operator

            if (
                (humanDecision == ROCK || computerDecision == ROCK) && (humanDecision == PAPER || computerDecision == PAPER)
            ) {
                // Rock and paper game, if the computer picked paper, then the human picked rock
                // Rock beats paper and vice-versa, thus choosing the winner
                // The same logic is applied to all the other game decisions
                winner = computerDecision == PAPER ? WINNER_COMPUTER : WINNER_HUMAN;
            } else if (
                (humanDecision == PAPER || computerDecision == PAPER) && (humanDecision == SCISSORS || computerDecision == SCISSORS)
            ) {
                // Paper/Scissors game
                winner = computerDecision == SCISSORS ? WINNER_COMPUTER : WINNER_HUMAN;
            } else if (
                (humanDecision == SCISSORS || computerDecision == SCISSORS) && (humanDecision == ROCK || computerDecision == ROCK)
            ) {
                // Scissors/Rock game
                winner = computerDecision == ROCK ? WINNER_COMPUTER : WINNER_HUMAN;
            }
        }

        string winnerText = "";
        if (winner == WINNER_NONE) {
            winnerText = "tie";
        } else if (winner == WINNER_COMPUTER) {
            winnerText = "Computer wins";
            computerWins++;
        } else if (winner == WINNER_HUMAN) {
            winnerText = "Human wins";
            humanWins++;
        }

        cout << "Computer:" << computerDecision << ", Human:" << humanDecision << ", " << winnerText << endl << endl;
    }
    cout << "Computer wins: " << computerWins << endl << "Human wins: " << humanWins;
}
