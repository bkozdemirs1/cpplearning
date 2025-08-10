#include<iostream>
using namespace std;

int main(){
    
    int bmi;
    
    int weight;

    float height;

    cout<<"Please enter your weight(kg) and your height (m) : ";

    cin>>weight>>height;

    bmi=(weight)/(height*height);

    if(bmi<18.5){
    
    cout<<"Skinny"<<endl;
    }
    
    else if (bmi>18.5 && bmi<24.9){
    
        cout<<"Normal"<<endl;
    }
    
    else if(bmi>25 && bmi<29.9){
    
        cout<<"Overweight"<<endl;
    }

   else if(bmi>30){
    
       cout<<"Obese"<<endl;
   }
   
   else{
       
       cout<<"Please enter a valid value!";
   }
   
    
    return 0;
}
