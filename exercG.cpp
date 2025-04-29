#include <iostream>
using namespace std;
int main(){

    double medida1, medida2, medida3, medida4;

    cout << "Digite a primeira medida da forma geometrica: ";
    cin >> medida1;

    cout << "Digite a segunda medida da forma geometrica: ";
    cin >> medida2;

    cout << "Digite a terceira medida da forma geometrica: ";
    cin >> medida3;

    cout << "Digite a quarta medida da forma geometrica: ";
    cin >> medida4;

    if (medida1 == medida2 && medida2 == medida3 && medida3 == medida4){
        cout << "Sua forma geometrica e um quadrado!";
    } else {
        cout << "Sua forma geometrica e um retangulo!";
    }
}