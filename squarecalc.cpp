#include<iostream>
using namespace std;

int areacalc(int x){ 
    return (x * x);
}

int perimetercalc(int y){
    return (4 * y);
}

int main(){
    int a;

    cout << "Please enter your side value of your square: " << endl;
    cin >> a;

    int area = areacalc(a);
    int perimeter = perimetercalc(a);

    cout << "Your area is: " << area << endl;
    cout << "Your perimeter is: " << perimeter << endl;

    return 0;
}
