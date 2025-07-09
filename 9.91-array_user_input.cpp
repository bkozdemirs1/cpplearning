// Taking input from user into an array and printing it
#include <iostream>
using namespace std;

int main() {
    int scores[3];

    cout << "Enter 3 exam scores: ";
    for (int i = 0; i < 3; i++) {
        cin >> scores[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < 3; i++) {
        cout << scores[i] << " ";
    }

    cout << endl;
    return 0;
}
