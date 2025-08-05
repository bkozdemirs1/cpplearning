#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main() {
    float price1 = 7.5;
    float price2 = 8.5;
    int quantity1, quantity2;
    string productname1, productname2;

    cout << "Please enter two product names: ";
    cin >> productname1 >> productname2;

    cout << productname1 << "'s price is: " << price1 << " TL" << endl;
    cout << productname2 << "'s price is: " << price2 << " TL" << endl;

    cout << "How many " << productname1 << " would you like to buy? ";
    cin >> quantity1;

    cout << "How many " << productname2 << " would you like to buy? ";
    cin >> quantity2;

    float total1 = quantity1 * price1;
    float total2 = quantity2 * price2;
    float sum = total1 + total2;

    cout << "\n----------- RECEIPT -----------" << endl;
    cout << fixed << setprecision(2);
    cout << productname1 << " x" << quantity1 << "   " << total1 << " TL" << endl;
    cout << productname2 << " x" << quantity2 << "   " << total2 << " TL" << endl;
    cout << "------------------------------" << endl;
    cout << "TOTAL:         " << sum << " TL" << endl;

    return 0;
}
