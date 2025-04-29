#include <iostream>
using namespace std;
int main()
{
    double distancia;
cout << "Digite a distancia da corrida em km: ";
cin >> distancia;

int hora;
cout << "Qual é a hora de inicio da corrida?(0-23): ";
cin >> hora;

double tarifaDia = 3.0;
double tarifaNoite = 5.0; 
double precoTotal;

if (hora >= 6 && hora < 20){
    precoTotal = distancia * tarifaDia;
} else {
    precoTotal = distancia * tarifaNoite;
}
    cout << "O valor total da corrida e: R$" << precoTotal << endl;
}