#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double amount;  
    string fromCurrency, toCurrency;  
    double result;

    const double usdToTry = 32.5;  
    const double eurToTry = 35.0;  
    const double tryToUsd = 1 / 32.5;  
    const double tryToEur = 1 / 35.0;  
    const double usdToEur = 0.93;  
    const double eurToUsd = 1.07;

    cout << "Enter amount: ";  
    cin >> amount;  

    cout << "Enter currency to convert from (USD, EUR, TRY): ";  
    cin >> fromCurrency;  

    cout << "Enter currency to convert to (USD, EUR, TRY): ";  
    cin >> toCurrency;

    if (fromCurrency == "USD" && toCurrency == "TRY")  
        result = amount * usdToTry;  

    else if (fromCurrency == "TRY" && toCurrency == "USD")  
        result = amount * tryToUsd;  

    else if (fromCurrency == "EUR" && toCurrency == "TRY")  
        result = amount * eurToTry;  

    else if (fromCurrency == "TRY" && toCurrency == "EUR")  
        result = amount * tryToEur;  

    else if (fromCurrency == "USD" && toCurrency == "EUR")  
        result = amount * usdToEur;  

    else if (fromCurrency == "EUR" && toCurrency == "USD")  
        result = amount * eurToUsd;  

    else {
        cout << "Invalid currency!" << endl;
        return 0;
    }

    cout << fixed << setprecision(2);
   
    cout << amount << " " << fromCurrency << " = " << result << " " << toCurrency << endl;
}
