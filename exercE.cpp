#include <iostream>
using namespace std;
int main()
{
    char operacao;
    cout << "Qual operacao deseja fazer?(+, -, *, /) ";
    cin >> operacao;
    
   double primeiroNumero;
   cout << "Digite o primeiro numero: ";
   cin >> primeiroNumero;
   
   double segundoNumero;
    cout << "Digite o segundo numero: ";
    cin >> segundoNumero;
    
    if (operacao == '+'){
    
    cout << "Resultado da soma e: " << primeiroNumero + segundoNumero << endl;
    }
    else if(operacao == '-'){
        cout << "Resultado da subtracao e: " << primeiroNumero - segundoNumero << endl;
    }
    else if(operacao == '*'){
        cout << "sua multiplicacao e: " << primeiroNumero * segundoNumero << endl;
    }
    else if(operacao == '/'){
        if (segundoNumero != 0){
            cout << "O resultado da divisao e: " << primeiroNumero / segundoNumero << endl;
            
        } else {
            cout << "Nao e permitido divisao por zero" << endl;
        }
    } else {
        cout << "Operacao invalida" << endl;
    }
cout << "Operacao inserida: " << operacao << endl;

return 0;    
}