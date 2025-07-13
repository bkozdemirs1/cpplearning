#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello, world!" << endl;
}


int add(int a, int b) {
    return a + b;
}


void printSum(int x, int y) {
    cout << "Sum: " << x + y << endl;
}


int square(int n); // Prototype

int main() {
    sayHello(); 

    int result = add(3, 5);
    cout << "Result of add: " << result << endl;

    printSum(10, 20);

    cout << "Square of 4: " << square(4) << endl;

    return 0;
}

int square(int n) {
    return n * n;
}
