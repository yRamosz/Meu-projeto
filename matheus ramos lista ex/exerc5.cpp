#include <iostream>
using namespace std;
int main()
{
    double celsius;
    cout << "Digite a temperatua em °C: ";
    cin >> celsius;
    
    double fahrenheit = (9.0 / 5.0) * celsius + 32;
    
    cout << "A temperatura em fahrenheit é: " << fahrenheit << "°F" << endl;
    
}