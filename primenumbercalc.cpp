#include<iostream>
using namespace std;

int main() {
    int number;
    cout << "Please enter a value: ";
    cin >> number;

    for(int i = 2; i <= number; i++) {
        bool isPrime = true;
        
        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            cout << "Prime number: " << i << endl;
        else
            cout << "Non-Prime number: " << i << endl;
    }

    return 0;
}
