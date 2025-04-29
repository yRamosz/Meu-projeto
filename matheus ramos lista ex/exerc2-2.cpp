
#include <iostream>
using namespace std;
int main()
{
   float baseMaior = 8.0; 
   float baseMenor = 4.0;
   float altura = 3.0;
   float area;
   
   area = (baseMaior + baseMenor) * altura / 2;
   
   cout << "a área do trapézio, que contém base maior " << baseMaior
        << ", base menor " << baseMenor
        << " e altura " << altura
        << " é " << area;
   
}