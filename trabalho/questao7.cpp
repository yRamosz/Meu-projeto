#include <iostream>
using namespace std;
int main()
{

    int a, b, c;

    cout << "Digite os tres angulos do triangulo: ";
    cin >> a >> b >> c;

    if (a + b + c != 180 || a <= 0 || b <= 0 || c <= 0)
    {
        cout << "Os angulos nao formam um triangulo valido. \n";
        return 0;
    }

    if (a < 90 && b < 90 && c < 90)
    {
        cout << "E um triangulo acutangulo.\n";
    }
    else if (a == 90 || b == 90 || c == 90)
    {
        cout << "E um triangulo retangulo.\n";
    }
    else
    {
        cout << "E um triangulo ontusangulo.\n";
    }
    return 0;
}