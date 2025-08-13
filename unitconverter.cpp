#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    double value;
    string unit;

    cout << "===== UNIT CONVERTER =====\n";
    cout << "1. Length (m, km, cm, in, ft)\n";
    cout << "2. Weight (kg, g, lb, oz)\n";
    cout << "3. Temperature (C, F, K)\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    cout << "Enter unit: ";
    cin >> unit;

    switch (choice) {
        case 1: // Length
            if (unit == "m") {
                cout << value << " m = " << value / 1000 << " km\n";
                cout << value << " m = " << value * 100 << " cm\n";
                cout << value << " m = " << value * 39.3701 << " in\n";
                cout << value << " m = " << value * 3.28084 << " ft\n";
            }
            else if (unit == "km") {
                cout << value << " km = " << value * 1000 << " m\n";
                cout << value << " km = " << value * 100000 << " cm\n";
            }
            else if (unit == "cm") {
                cout << value << " cm = " << value / 100 << " m\n";
                cout << value << " cm = " << value / 100000 << " km\n";
            }
            else {
                cout << "Unknown length unit.\n";
            }
            break;

        case 2: // Weight
            if (unit == "kg") {
                cout << value << " kg = " << value * 1000 << " g\n";
                cout << value << " kg = " << value * 2.20462 << " lb\n";
                cout << value << " kg = " << value * 35.274 << " oz\n";
            }
            else if (unit == "g") {
                cout << value << " g = " << value / 1000 << " kg\n";
            }
            else if (unit == "lb") {
                cout << value << " lb = " << value * 0.453592 << " kg\n";
            }
            else {
                cout << "Unknown weight unit.\n";
            }
            break;

        case 3: // Temperature
            if (unit == "c") {
                cout << value << " C = " << (value * 9/5) + 32 << " F\n";
                cout << value << " C = " << value + 273.15 << " K\n";
            }
            else if (unit == "f") {
                cout << value << " F = " << (value - 32) * 5/9 << " C\n";
                cout << value << " F = " << ((value - 32) * 5/9) + 273.15 << " K\n";
            }
            else if (unit == "k") {
                cout << value << " K = " << value - 273.15 << " C\n";
                cout << value << " K = " << ((value - 273.15) * 9/5) + 32 << " F\n";
            }
            else {
                cout << "Unknown temperature unit.\n";
            }
            break;

        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
