#include <iostream>

using namespace std;

int main() {
    
    double x, y;
    
    cout << "Enter X coordinate: ";
    
    cin >> x;
    
    cout << "Enter Y coordinate: ";
    
    cin >> y;

    if(x == 0 && y == 0)
        
        cout << "The point (" << x << ", " << y << ") is at the Origin." << endl;
    
    else if(x == 0)
        
        cout << "The point (" << x << ", " << y << ") is on the Y-axis." << endl;
    
    else if(y == 0)
        
        cout << "The point (" << x << ", " << y << ") is on the X-axis." << endl;
    
    else if(x > 0 && y > 0)
        
        cout << "The point (" << x << ", " << y << ") is in Quadrant 1." << endl;
    
    else if(x < 0 && y > 0)
        
        cout << "The point (" << x << ", " << y << ") is in Quadrant 2." << endl;
    
    else if(x < 0 && y < 0)
        
        cout << "The point (" << x << ", " << y << ") is in Quadrant 3." << endl;
   
    else
        
        cout << "The point (" << x << ", " << y << ") is in Quadrant 4." << endl;

    return 0;

}
