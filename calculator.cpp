#include <iostream>
using namespace std;
int main(){

int selection;
float num1,num2;
float result;

cout<<"For '+' press 1"<<endl<<"For '-' press 2"<<endl<<"For '*' press 3"<<endl<<"For '/' press 4"<<endl;
cin>>selection;

switch(selection){
    
    case 1: cout<<"Addition selected as successfully, now please enter 2 values! ";
    cin>>num1>>num2;
    result=(num1+num2);
    cout<<result<<endl; break;

    case 2: cout<<"Subtraction selected as successfully, now please enter 2 values! ";
    cin>>num1>>num2;
    result=(num1-num2);
    cout<<result<<endl; break;

    case 3: cout<<"Multiplication selected as successfully, now please enter 2 values! ";
    cin>>num1>>num2;
    result=(num1*num2);
    cout<<result<<endl; break;   
    
    case 4: cout<<"Divition selected as successfully, now please enter 2 values! ";
    cin>>num1>>num2;
    result=(num1/num2);
    cout<<result<<endl; break;  
    
    default: cout<<"Please make your choice between number 1 and 4! ";
    }
    
    return 0;
    }
