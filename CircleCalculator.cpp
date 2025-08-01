#include<iostream>
using namespace std;

int main(){
  int number;
  int pi=3;
   int r;
   int result;
cout<<"To calculate area enter 1!"<<endl;
cout<<"To calculate perimeter enter 2!"<<endl;
cin>>number;
switch(number){
  case 1: cout<<"You've choosed area please enter your half-radius!";
  cin>>r;
    result=(pi*r*r);
    cout<<"Your result is: "<<result<<endl;
  break;

  case 2: cout<<"You've choosed perimeter please enter your half-radius!";
  cin>>r;
  result=(2*pi*r);
  cout<<"Your result is: "<<result<<endl;
 break;

  default: cout<<"Please only select number 1 or 2";
  break;
  
}
  return 0;
}
