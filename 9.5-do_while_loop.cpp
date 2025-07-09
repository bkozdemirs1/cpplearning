// Demonstrates do-while loop that runs at least once
#include <iostream>
using namespace std;

int main() {
    int number = 0;

    do {
        cout << "This will print at least once. Number: " << number << endl;
        number++;
    } while (number < 1);

    return 0;
}
