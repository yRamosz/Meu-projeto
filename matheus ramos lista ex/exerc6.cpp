#include <iostream>
using namespace std;
int main()
{
    double raio;
    cout << "Digite o raio da esfera: ";
    cin >> raio;
    
    const double PI = 3.14;
    
    double volume = (4.0 / 3.0) * PI * raio * raio * raio;
    
    cout << " O volume da esfera é: " << volume << endl;
}
    
    
   