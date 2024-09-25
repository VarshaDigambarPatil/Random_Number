#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "I'm thinking of a number between 1 and 100. Can you guess it?\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Your guess is too low.\n";
        } else if (guess > secretNumber) {
            cout << "Your guess is too high.\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}