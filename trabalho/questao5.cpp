#include <iostream>
using namespace std;
int main()
{

    int a, b, c;

    cout << "Digite os tres numeros distintos para descobrir a mediana: ";
    cin >> a >> b >> c;

    int menor, meio, maior;

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
            maior = a;
            meio = c;
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
            maior = a;
            meio = b;
        }
    }
    cout << "Em ordem crescente: " << menor << ", " << meio << ", " << maior << endl;
    cout << "==================================\n";
    cout << "A mediana e: " << meio << endl;
    return 0;
}
