#include <iostream>
using namespace std;
int main() {
    double preco_ingresso = 25.0, preco_final;
    char estudante, idoso;
    
    cout << "Voce e estudante? (s/n): ";
    cin >> estudante;
    
    cout << "Voce e idoso? (s/n): ";
    cin >> idoso;
    
    if (estudante == 's' || estudante == 'S') {
        preco_final = preco_ingresso * 0.5;
    } else if (idoso == 's' || idoso == 'S') {
        preco_final = preco_ingresso * 0.8;
    } else {
        preco_final = preco_ingresso;
    }
    
    cout << "O valor do ingresso e: R$ " << preco_final << endl;
    
}
