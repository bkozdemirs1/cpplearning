#include <iostream>
#include <cmath>
#include <complex>
#include <iomanip>

using namespace std;

int main() {
    
double a, b, c;
    
    cout << "Enter coefficient a: ";
    cin >> a;
    
    cout << "Enter coefficient b: ";
    cin >> b;
    
    cout << "Enter coefficient c: ";
    cin >> c;

    complex<double> discriminant = (b * b) - complex<double>(4 * a * c);
   
    cout << "Discriminant (Δ) = " << discriminant << endl;

    complex<double> root1 = (-b + sqrt(discriminant)) / (2.0 * a);
    
    complex<double> root2 = (-b - sqrt(discriminant)) / (2.0 * a);

    cout<<fixed<<setprecision(2)<<endl;
    
    cout << "Root 1 = " << root1 << endl;
    
    cout << "Root 2 = " << root2 << endl;

    return 0;
}
