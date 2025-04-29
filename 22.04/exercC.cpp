#include <iostream>
using namespace std;

int main() {
    int n, f = 1;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    if (n < 0) {
        cout << "Fatorial nao existe para numeros negativos." << endl;
    } else {
        int i = 1;
        while (i <= n) {
            f *= i;
            i++;
        }

        cout << n << "! = " << f << endl;
    }

    return 0;
}