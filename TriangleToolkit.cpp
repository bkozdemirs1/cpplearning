#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double side_a, side_b, side_c;
    
    cout << "Enter the first side of the right triangle (a): ";
    cin >> side_a;
    cout << "Enter the second side of the right triangle (b): ";
    cin >> side_b;
  
    side_c = sqrt((side_a * side_a) + (side_b * side_b));
    double area = (side_a * side_b) / 2; 
    
    cout << "Hypotenuse (c) = " << side_c << endl;
    cout << "Area = " << area << endl;

    double angle_A_rad = asin(side_a / side_c); 
    double angle_B_rad = asin(side_b / side_c); 

    double angle_A_deg = angle_A_rad * 180.0 / M_PI;
    double angle_B_deg = angle_B_rad * 180.0 / M_PI;

    cout << "Angle opposite side a (A) = " << angle_A_deg << " degrees" << endl;
    cout << "Angle opposite side b (B) = " << angle_B_deg << " degrees" << endl;

    return 0;
}
