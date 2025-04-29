#include <iostream>
using namespace std;
int main(){

    double quantiNumero = 0;
    cout << "de quantos numeros voce calculara a media: ";
    cin >> quantiNumero; 

    
    double media = 0;
    double notas = 0;

    int i = 1;

    while (i <= quantiNumero){
        cout << "Qual o valor do numero " << i << "? ";
        cin >> notas;
        i++;

    }

    media = media + notas / quantiNumero;

    cout << "sua media e: " << media; 
}