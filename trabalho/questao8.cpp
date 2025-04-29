#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    double delta;

    cout << "Digite os coeficientes a, b e c da equacao de segundo grau: ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "invalido. 'a' nao pode ser zero" << endl;
    }
    else
    {

        delta = b * b - 4 * a * c;

        if (delta > 0)
        {
            cout << "A equacao possui duas raizes reais e distintas" << endl;
        }
        else if (delta == 0)
        {
            cout << "A equacao possuiu uma raiz real (raiz dupla)" << endl;
        }
        else
        {
            cout << "A equacao possui duas raizes complexas" << endl;
        }
    }

    return 0;
}