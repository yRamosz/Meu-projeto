#include <iostream>
using namespace std;
int main(){

    int x, y, soma = 0;

    cout << "Digite o intervalo inferior: ";
    cin >> x;

    cout << "Digite o intervalo superior: ";
    cin >> y;

    int i = x;
    while (i <= y) {
        if (i % 2 == 0) {
            soma += i;
        }
        i++;
    }
     
    cout << "o intervalo de numeros pares e: " << soma << endl;
}