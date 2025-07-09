#include <iostream>
using namespace std;

int main() {
    bool a = true;
    bool b = false;

    cout << (a && b) << endl; // false because if the given condition is "&&" it has to be happen at the same time so that's why it is false.
    cout << (a || b) << endl; // true because if the given condition is " || " it doesn't have to be happen at the same time so we can accept is as true
    cout << (!a)     << endl; // false 

    return 0;
}
