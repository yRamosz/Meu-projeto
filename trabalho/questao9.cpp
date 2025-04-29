#include <iostream>
using namespace std;
int main()
{

    int A, B, C;
    int total = 0;

    cout << "O convidado A ira comparecer?: (1-Sim ou 2-Nao)" << endl;
    cin >> A;

    cout << "O convidado B ira comparecer?: (1-Sim ou 2-Nao)" << endl;
    cin >> B;

    cout << "O convidado C ira comparecer?: (1-Sim ou 2-Nao)" << endl;
    cin >> C;

    if (A == 1)
    {
        total += 300;
    }
    if (B == 1)
    {
        total += 1500;
    }
    if (C == 1)
    {
        total += 600;
    }

    cout << "Dona chica vai preparar " << total << "g do prato x" << endl;

    return 0;
}