#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

float p,r; // p = principal , r = rate

int t;     // t = time

cout<<"Enter principal amount: ";

cin>>p;

cout<<"Enter annual interest rate (%): ";

cin>>r;

cout<<"Enter time (years): ";

cin>>t;

float SI = (p*r*t)/100;

float CI = p * (pow(1 + (r / 100.0), t) - 1);


cout << fixed << setprecision(2);


cout<<"Simple Interest = "<<" "<<SI<<endl;

cout<<"Compound Interest = "<<" "<<CI<<endl;

cout << "Total Amount (with CI) = " << (p + CI) << endl;


return 0;

}

    
