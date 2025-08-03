#include<iostream>
using namespace std;

int areacalc(int x){ 
return (x*x);
}

int perimetercalc(int x){
  return (4*x);
}

int main(){

  int a;

  cout<<"Please enter your side value of your square: "<<endl"

    cin>>a;

  areacalc(a);

  cout<<"Your area is: "<<a<<endl;

  perimetercalc(a);

  cout<<"Your perimeter is: "<<a<<endl; 

}
