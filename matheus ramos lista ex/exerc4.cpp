
#include <iostream>
using namespace std;
int main()
{
  double notaTrabalho1;
  cout << "Digite sua nota do trabalho 1: ";
  cin >> notaTrabalho1;
  
  double notaProva1;
  cout << "Digite sua nota da prova 1: ";
  cin >> notaProva1;
  
  double M1 = notaTrabalho1 * 0.25 + notaProva1 * 0.75;
  
  cout << " a nota da M1 é: " << M1 << endl;
  
  
  double notaTrabalho2;
  cout << "Digite sua nota do trabalho 2: ";
  cin >> notaTrabalho2;
  
  double notaProva2;
  cout << "Digite sua nota da prova 2: ";
  cin >> notaProva2;
  
  double M2 = notaTrabalho2 * 0.25 + notaProva2 * 0.75;
  
  cout << "a nota da M2 é: " << M2 << endl;
  
  double projetoFinal;
  cout << "Digite sua nota do projeto final: ";
  cin >> projetoFinal;
  
  double notaProva3;
  cout << "Digite sua nota da prova 3: ";
  cin >> notaProva3;
  
  double M3 = projetoFinal * 0.70 + notaProva3 * 0.30;
  cout << "a nota da M3 é: " << M3 << endl;
  
  double mediaFinal = (M1 + M2 + M3) / 3;
  
  cout << "Sua média final é: " << mediaFinal << endl;
  
  string resultado = (mediaFinal >= 6 ) ? "Aprovado" : "Reprovado";
  cout << "você está: " << resultado << endl;
}                    