#include <iostream>
using namespace std;

int main()
{
    float bill;
    float tip;
    int person;
    float tip_amount;
    float total_amount;
    float each_person;

    cout << "Enter the bill amount: ";
    
  cin >> bill;

    cout << "Enter the tip percentage: ";
   
  cin >> tip;

    cout << "How many people to split the bill: ";
    
  cin >> person;

    tip_amount = bill * (tip / 100);
   
  total_amount = bill + tip_amount; 
    
  each_person = total_amount / person;

    
  cout << "Tip amount: " << tip_amount << endl;
    
  cout << "Total amount (bill + tip): " << total_amount << endl;
   
  cout << "Each person should pay: " << each_person << endl;

    return 0;
}
