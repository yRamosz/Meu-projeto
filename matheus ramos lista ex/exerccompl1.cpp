#include <iostream>
using namespace std;
int main()
{
    double distancia;
    cout << "Em KM, digite a distancia percorrida: ";
    cin >> distancia;
    
    double quantidadeCombustivel;
    cout << "Em Litros, digite a quatidade de combustivel gastado: ";
    cin >> quantidadeCombustivel;
    
    double valorCombustivel;
    cout << "Qual o valor gasto em combustivel: ";
    cin >> valorCombustivel;
    
    double consumoMedio = distancia / quantidadeCombustivel;
    double gastoTotal = quantidadeCombustivel * valorCombustivel;
    
    cout << "O consumo médio foi: " << consumoMedio << " Km/L " << endl;
    cout << "O gasto total foi de: R$" <<gastoTotal << endl;
    
}
    
    
   