#include <iostream>
using namespace std;

int main() {
    int array[10000];
    int number, i;
    float sum = 0;
    float average;

    int evenCount = 0, oddCount = 0;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    cout << "How many numbers will you enter?: ";
    cin >> number;

    cout << "\nPlease enter your " << number << " values:\n";

    for (i = 0; i < number; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> array[i];
        sum += array[i];
    }

    average = sum / number;

    int maxVal = array[0];
    int minVal = array[0];

    cout << "\n------- Number Details -------\n";

    for (i = 0; i < number; i++) {
       
        if (array[i] > maxVal) maxVal = array[i];
        if (array[i] < minVal) minVal = array[i];

        cout << array[i] << " is ";

        if (array[i] % 2 == 0) {
            cout << "even";
            evenCount++;
        } else {
            cout << "odd";
            oddCount++;
        }

        cout << " and ";

        if (array[i] > 0) {
            cout << "positive";
            positiveCount++;
        } else if (array[i] < 0) {
            cout << "negative";
            negativeCount++;
        } else {
            cout << "zero";
            zeroCount++;
        }

        cout << endl;
    }

    cout << "\n---------- Results ----------\n";
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;
    cout << "Positive numbers: " << positiveCount << endl;
    cout << "Negative numbers: " << negativeCount << endl;
    cout << "Zeros: " << zeroCount << endl;

    return 0;
}
