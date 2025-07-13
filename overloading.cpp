#include <iostream>
using namespace std;


int multiply(int a, int b) {
    return a * b;
}


double multiply(double a, double b) {
    return a * b;
}


int multiply(int a, int b, int c) { // As you can see we used multiply tag as 3 times we called that in syntax as "Overloading".
    return a * b * c;
}

int main() {
    cout << "multiply(2, 3) = " << multiply(2, 3) << endl;             // int-int
    cout << "multiply(2.5, 4.0) = " << multiply(2.5, 4.0) << endl;     // double-double
    cout << "multiply(2, 3, 4) = " << multiply(2, 3, 4) << endl;       // int-int-int

    return 0;
}
