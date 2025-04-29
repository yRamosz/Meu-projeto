#include <iostream>
using namespace std;
int main(){

    int l1, l2, l3;

    cout << "Digite os tres lados do triangulo: ";
    cin >> l1 >> l2 >> l3;

    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l3 + l2 > l1)){

        if (l1 == l2 && l2 == l3){
            cout << "E um triangulo equilatero (tres lados iguais)" << endl;
        } else if (l1 == l2 || l1 == l3 || l2 == l3){
            cout << "E um triangulo isosceles (dois lados iguais)" << endl;
        } else {
            cout << "E um triangulo escaleno (todos os lados diferentes)" << endl;
        }
    } else{
        cout << "Os valores nao formam um triangulo" << endl;
    }

    return 0;
}