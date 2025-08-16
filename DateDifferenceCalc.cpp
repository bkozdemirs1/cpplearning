#include <iostream>

using namespace std;

int main() {
    
    int day_1,month_1,year_1;
   
    int day_2,month_2,year_2;
    
    int result_1=0;
    
    int result_2=0;
    
    int result_3=0;
    
   cout << "Enter your current date (day, month, year): ";
   
   cin >> day_1 >> month_1 >> year_1;
   
   cout << "Enter second date (day, month, year): ";
   
   cin >> day_2 >> month_2 >> year_2;
   
   result_1=year_1-year_2;
   
   result_2=month_1-month_2;
   
   result_3=day_1-day_2;
   
   cout << "Difference between the two dates is: "  << result_1 << " years, " << result_2 << " months, "<< result_3 << " days." << endl;
     
     return 0;

}
