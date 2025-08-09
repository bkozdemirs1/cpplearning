#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Please enter your grade to see your letter grade: ";
    cin >> grade;

    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: AA";
    }
    else if (grade >= 79 && grade <= 89) {
        cout << "Your letter grade is: BA";
    }
    else if (grade >= 68 && grade <= 78) {
        cout << "Your letter grade is: BB";
    }
    else if (grade >= 61 && grade <= 67) {
        cout << "Your letter grade is: CB";
    }
    else if (grade >= 54 && grade <= 60) {
        cout << "Your letter grade is: CC";
    }
    else if (grade >= 47 && grade <= 53) {
        cout << "Your letter grade is: DC";
    }
    else if (grade >= 39 && grade <= 46) {
        cout << "Your letter grade is: DD";
    }
    else if (grade >= 0 && grade <= 38) {
        cout << "Your letter grade is: FF";
    }
    else {
        cout << "Invalid grade entered!";
    }

    return 0;
}
