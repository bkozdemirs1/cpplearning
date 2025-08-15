#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
float distance;
float consumption;
float speed;
float fuel_price;
float fuel_used;
float fuel_cost;
float travel_time;

cout<<"Enter distance traveled (km): ";
cin>>distance;

cout<<"Enter fuel consumption (liters per 100 km): ";
cin>>consumption;

cout<<"Enter fuel price (per liter): ";
cin>>fuel_price;

cout<<"Enter average speed (km/h): ";
cin>>speed;

fuel_used= (distance * consumption) / 100;
fuel_cost= (fuel_used * fuel_price);
travel_time= (distance / speed);


cout << fixed << setprecision(2);

cout<<"Fuel used: "<<fuel_used<<" "<<"liters"<<endl;
cout<<"Fuel cost: "<<fuel_cost<<" "<<"TL"<<endl;
cout<<"Travel time:"<<travel_time<<" "<<"hours"<<endl;

return 0;
}
