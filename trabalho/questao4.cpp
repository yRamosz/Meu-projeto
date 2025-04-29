#include <iostream>
using namespace std;
int main()
{

    int a, b, c;

    cout << "Digite tres numeros distintos: ";
    cin >> a >> b >> c;

    int maior, meio, menor;

    if (a < b && a < c)
    {
        menor = a;
        if (b < c)
        {
            meio = b;
            maior = c;
        }
        else
        {
            meio = c;
            maior = b;
        }
    }
    else if (b < a && b < c)
    {
        menor = b;
        if (a < c)
        {
            meio = a;
            maior = c;
        }
        else
        {
            meio = c;
            maior = a;
        }
    }
    else
    {
        menor = c;
        if (a < b)
        {
            meio = a;
            maior = b;
        }
        else
        {
            meio = b;
            maior = a;
        }
    }

    cout << "Em ordem crescente: " << menor << ", " << meio << ", " << maior << endl;

    return 0;
}