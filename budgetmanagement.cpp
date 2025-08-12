#include <iostream>
#include <string>

using namespace std;

int main()
{
    string arr[100];
    
    float price[100];
    
    int i;
    
    float result=0;
    
    int number;
    
    int balance;
    
    cout<<"Please enter your balance: ";
    
    cin>>balance;
    
    cout<<"How many product you've bought totally: ";
    
    cin>>number;   
   
    cout<<"Please enter what you've bought! "<<endl;
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int size1= sizeof(price) / sizeof(price[0]);
    
    for(i=0;i<number;i++){
    
     cout<<"Product"<<" "<<(i+1)<<": ";
       
       cin>>arr[i];
      
   cout<<"What is the price of the"<<" "<<arr[i]<<" "<<"? =";
    
        cin>>price[i];
    
       result+=price[i];
    
      }  
    
   if(result<=balance)
   {
     
     cout<<"You've spent total"<<" "<<result<<" "<<"TRY !"<<endl;
   
     cout<<"A total of"<<" "<< (balance-result)<<" "<<"TRY remained!"<<endl;  
   
       
   }
   
   else
   {
   
   cout<<"You don't have enough money to make it afford."<<endl;
   
   cout<<"The price you must pay:"<<" "<<(result-balance)<<endl;
   
   cout<<"Total spend: "<<" "<<result<<endl;
   
   cout<<"Your balance: "<<" "<<balance<<endl;
    
   return 0;

   }
   
   }
    
    
    
