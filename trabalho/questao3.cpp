#include <iostream>
using namespace std;
int main()
{

    double P1, P2;

    const int C1 = 3;
    const int C2 = 2;

    cout << "O comprimento da gangorra e:  \n";
    cout << "Lado esquerdo: " << C1 << " metros \n";
    cout << "Lado direito: " << C2 << " metros \n";

    cout << "Digite o peso da primeira crianca: " << endl;
    cin >> P1;

    cout << "Digite o peso da segunda crianca: " << endl;
    cin >> P2;

    int ladoEsq = C1 * P1;
    int ladoDir = C2 * P2;

    if (ladoEsq == ladoDir)
    {
        cout << "A gangorra esta equilibrada";
    }
    else if (ladoEsq > ladoDir)
    {
        cout << "A gangorra pende para a esquerda";
    }
    else
    {
        cout << "A gangorra pende para a direita";
    }

    return 0;
}