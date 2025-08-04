#include<iostream>
using namespace std;

void fact (int x, int factorial=1); //prototype

int main(){
    
     int number;
     
     cout<<"Please enter a value: ";
     
     cin>>number;
     
     fact(number);
    
}

void fact (int x, int factorial){
    
    for(int i=1;i<=x;i++){
    
      factorial*=i;
      
      cout<<i<<". ="<<factorial;
    
      cout<<endl;
        
         } 

    }
