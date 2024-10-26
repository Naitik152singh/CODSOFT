#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random seed based on time
    srand((unsigned int)time(0));
    int Number = (rand() % 100) + 1; // Random number between 1 and 100
    int guess;
    int tries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > Number) {
            cout << "Too high! Guess lower." << endl;
        } else if (guess < Number) {
            cout << "Too low! Guess higher." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;
        }
    } while (guess != Number);

    return 0;
}