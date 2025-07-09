// Find the largest number in an array
#include <iostream>
using namespace std;

int main() {
    int values[] = {12, 45, 7, 89, 34};
    int max = values[0];

    for (int i = 1; i < 5; i++) {
        if (values[i] > max) {
            max = values[i];
        }
    }

    cout << "Maximum value: " << max << endl;
    return 0;
}
