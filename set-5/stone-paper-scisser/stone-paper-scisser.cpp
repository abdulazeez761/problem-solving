#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

enum enChoice {
    Paper = 1,
    Stone = 2,
    Scissors = 3
};

int ReadPositiveNumber(string message) {
    int Number;
    cout << message;
    cin >> Number;
    return Number;
}

int RandomNumber(int From = 1, int To = 3) {
    srand(time(0)); // Seed the random number generator
    int random = rand() % (To - From + 1) + From;
    return random;
}

string roundWinners(int Player, int Computer) {
    if (Player == enChoice::Paper && Computer == enChoice::Scissors)
        return "Computer";
    if (Player == enChoice::Scissors && Computer == enChoice::Paper)
        return "Player";
    if (Player == enChoice::Paper && Computer == enChoice::Stone)
        return "Player";
    if (Player == enChoice::Stone && Computer == enChoice::Paper)
        return "Computer";
    if (Player == enChoice::Stone && Computer == enChoice::Scissors)
        return "Player";
    if (Player == enChoice::Scissors && Computer == enChoice::Stone)
        return "Computer";
    if (Player == enChoice::Paper && Computer == enChoice::Paper)
        return "[No winner]";
    if (Player == enChoice::Scissors && Computer == enChoice::Scissors)
        return "[No winner]";
    if (Player == enChoice::Stone && Computer == enChoice::Stone)
        return "[No winner]";

    return "";
}

void displayResult(string winner) {
    if (winner == "Computer") {
        cout << "\a"; // Ring bell
        cout << "Computer wins! (Screen turns red)" << endl;
        system("color 4F");
    }
    else if (winner == "Player") {
        cout << "Player wins! (Screen turns green)" << endl;
        system("color 2F");
    }
    else {
        cout << "No winner this round." << endl;
        system("color 6F");
    }
}

void printGameResults(int playerWiningRounds, int computerWiningRounds) {
    cout << "Game Over" << endl;
    cout << "Player won " << playerWiningRounds << " rounds." << endl;
    cout << "Computer won " << computerWiningRounds << " rounds." << endl;
}

bool playAgain() {
    char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    return choice == 'y' || choice == 'Y';
}

void startMatch(int rounds) {
    int computerWiningRounds = 0, playerWiningRounds = 0;
    while (rounds) {
        int playerChoice = ReadPositiveNumber("Choose: [1] Paper [2] Stone [3] Scissors: ");
        int computerChoice = RandomNumber();

        string winner = roundWinners(playerChoice, computerChoice);
        displayResult(winner);

        if (winner == "Computer")
            computerWiningRounds++;
        else if (winner == "Player")
            playerWiningRounds++;

        rounds--;
    }

    printGameResults(playerWiningRounds, computerWiningRounds);
}

int main() {
    do {
        int rounds = ReadPositiveNumber("Enter number of rounds: ");
        startMatch(rounds);
    } while (playAgain());

    return 0;
}
