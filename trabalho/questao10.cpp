#include <iostream>
using namespace std;
int main(){
    
    double altura, largura, comprimento, capacidade, litrosPDia;

    cout << "Digite as dimensoes do reservatorio em cm, na ordem: altura, largura e comrprimento: ";
    cin >> altura >> largura >> comprimento;

    cout << "Quantos litros por dia sao ultilziados do reservatorio?: ";
    cin >> litrosPDia;

    capacidade = altura * largura * comprimento;
    cout << "A capacidade do reservatorio e: " << capacidade << "cm^3" << endl;

    double capacidadeLitros = capacidade / 1000;
    cout << "ou " << capacidadeLitros << " litros" << endl;
    
    double autonomia = capacidadeLitros / litrosPDia;
    cout << "A autonomia e: " << autonomia << " dias" << endl;

    if (autonomia < 2){
        cout << "classificacao: consumo elevado " << endl;
    } else if( autonomia >= 2 && autonomia <= 7){
        cout << "classificacao: consumo moderado" << endl;
    } else {
        cout << "classificacao: consumo baixo" << endl;
    }
    return 0;


}