#include <iostream>
#include <cmath> //or you can use math.h instead too! :D

using namespace std;

int main() {
   
  double principal;           
    
  double annualInterestRate; 
    
  int years;                  
   
  double monthlyInterestRate; 
   
  int numberOfPayments;       
    
  double monthlyPayment;     

    cout << "Enter loan amount (principal): ";
    cin >> principal;

    cout << "Enter annual interest rate (%): ";
    cin >> annualInterestRate;

    cout << "Enter loan term (years): ";
    cin >> years;

   
    monthlyInterestRate = (annualInterestRate / 100) / 12;

    
    numberOfPayments = years * 12;

   
    monthlyPayment = principal * (monthlyInterestRate * pow(1 + monthlyInterestRate, numberOfPayments)) /
                     (pow(1 + monthlyInterestRate, numberOfPayments) - 1);

    
    cout << "Monthly payment: " << monthlyPayment << endl;
    cout << "Total payment: " << monthlyPayment * numberOfPayments << endl;
    cout << "Total interest: " << (monthlyPayment * numberOfPayments) - principal << endl;

    return 0;
}
