#include <iostream>
#include <cmath> 
#include <iomanip>
#define gravity 9.81

using namespace std;

int main() {
    double v0, angle_deg;
    cout << "Enter initial velocity (m/s): ";
    cin >> v0;
    cout << "Enter launch angle (degrees): ";
    cin >> angle_deg;

    double angle_rad = angle_deg * M_PI / 180.0; 

    double H = pow(v0 * sin(angle_rad), 2) / (2*gravity);
    double T = 2 * v0 * sin(angle_rad) / gravity;
    double R = pow(v0, 2) * sin(2*angle_rad) / gravity;

    cout<<fixed<<setprecision(2);
    cout << "Max height: " << H << " m\n";
    cout << "Flight time: " << T << " s\n";
    cout << "Range: " << R << " m\n";

    return 0;
}
