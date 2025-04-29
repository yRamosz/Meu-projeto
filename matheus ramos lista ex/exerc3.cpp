
#include <iostream>
using namespace std;
int main()
{
  float n1; 
  cout << "Digite o primeiro número: ";
  cin >> n1;
  
  float n2;
  cout << "Digite o segundo número: ";
  cin >> n2;
  
  cout << " soma: " << n1 + n2;
  cout << " subtracao: " << n1 - n2;
  cout << " multiplicacao: " << n1 * n2;
  
  if (n2 != 0){
      cout << " divisao: " << n1 / n2;
}  else { 
    cout << " Erro: não é permitido divisao por zero";
  }
             
}                    