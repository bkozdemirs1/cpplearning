#include <iostream>
using namespace std;

int main() {
    int selection;
    float num1, num2, result;

    cout << "Simple Calculator using switch-case in C++" << endl;
    cout << "------------------------------------------" << endl;
    cout << "1 - Addition (+)" << endl;
    cout << "2 - Subtraction (-)" << endl;
    cout << "3 - Multiplication (*)" << endl;
    cout << "4 - Division (/)" << endl;
    cout << "Please select an operation (1-4): ";
    cin >> selection;

    switch (selection) {
        case 1:
            cout << "Addition selected. Please enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;

        case 2:
            cout << "Subtraction selected. Please enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;

        case 3:
            cout << "Multiplication selected. Please enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;

        case 4:
            cout << "Division selected. Please enter two numbers: ";
            cin >> num1 >> num2;

            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;

        default:
            cout << "Invalid selection! Please choose between 1 and 4." << endl;
    }

    return 0;
}
