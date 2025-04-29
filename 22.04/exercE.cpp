#include <ctime>
#include <iostream> 
#include <cstdlib>
using namespace std;

int main() {    
    srand (time(0)); 
    int numeroSecreto = rand() % 100 + 1; 
    int palpite;
    int tentativas = 0;
    const int maxTentativas = 3;

    cout << "Jogo de Adivinhacao!" << endl;
    cout << "Tente adivinhar o numero secreto entre 1 e 100." << endl;

    while (tentativas < maxTentativas) {
        cout << "Tentativa " << (tentativas + 1) << " de " << maxTentativas << ": ";
        cin >> palpite;

        if (palpite == numeroSecreto) {
            cout << "Parabens! Voce acertou o numero secreto!" << endl;
            return 0; 
        } else if (palpite < numeroSecreto) {
            cout << "O numero secreto eh MAIOR que " << palpite << "." << endl;
        } else {
            cout << "O numero secreto eh MENOR que " << palpite << "." << endl;
        }

        tentativas++;
    }

    cout << "Que pena! Suas tentativas acabaram." << endl;
    cout << "O numero secreto era: " << numeroSecreto << endl;

    return 0;
}
