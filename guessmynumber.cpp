#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    int number, guess, guesscount = 0;

    number = rand() % 100 + 1; // 1 ile 100 arasında sayı

    cout << "Guess the number between 1 and 100!" << endl;

    while (true) {
        cout << "Please enter your guess: ";
        cin >> guess;
        guesscount++;

        if (guess == number) {
            cout << "Correct! You found the number " << number << " in " << guesscount << " tries." << endl;
            break; // Doğru tahminde döngüyü kır
        }
        else if (guess < number) {
            cout << "Too low, try again." << endl;
        }
        else {
            cout << "Too high, try again." << endl;
        }
    }

    return 0;
}
