#include <iostream>

using namespace std;

int main()
{
    
    float distance;
    float speed;
    float result=0;
    
    cout<<"Enter the distance (km): ";
    cin>>distance;
    
    cout<<"Enter the speed (km/h):";
    cin>>speed;
    
    
    result= (distance) / (speed);
    
    cout<<"Estimated travel time: "<<result<<" "<<"hours"<<endl;

return 0;
  }
