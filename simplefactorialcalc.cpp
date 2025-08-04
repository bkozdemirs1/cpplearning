#include<iostream>
using namespace std;

int main(){
    
    int i,number,factorial=1;
    cout<<"Please enter a value: ";
    
    cin>>number;

    
    for(i=1;i<=number;i++){
        
        factorial*=i;
        
       cout<<i<<". "<<factorial<<endl;
        
    }
    
}
