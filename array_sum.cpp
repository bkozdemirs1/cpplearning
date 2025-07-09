// Calculate the sum of array elements
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {4, 7, 1, 9, 2};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
