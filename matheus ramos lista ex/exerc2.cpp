
#include <iostream>
using namespace std;
int main()
{
   float baseMaior;
   cout << "Digite a base maior do trapézio: ";
   cin >> baseMaior; 
   
   float baseMenor;
   cout << "Digite a base menor do trapézio: ";
   cin >> baseMenor;
   
   float altura;
   cout << "Digite a altura do trapézio: "; 
   cin >> altura;
   
   float area = (baseMaior + baseMenor) * altura / 2;
   
   cout << "A área do trapézio é: " << area; 
   
}