#include <iostream>
using namespace std;
int main()
{
    int opcao;
    do
    {
        cout << "===========================" << endl;
        cout << "  CALCULADORA DE POSICAO   " << endl;
        cout << "===========================" << endl;
        cout << "1 - Fazer um calculo" << endl;
        cout << "2 - sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1)
        {

            double S0, V0, t, a, s;

            cout << "Digite a posicao inicial (S0): ";
            cin >> S0;

            char km;
            cout << "A posicao inicial esta em metros ou km?(m ou k): ";
            cin >> km;

            while (km != 'm' && km != 'M' && km != 'k' && km != 'K')
            {
                cout << "Opcao invalida. Digite novamente (m ou k): ";
                cin >> km;
            }
            if (km == 'k' || km == 'K')
            {
                S0 = S0 * 1000;
            }

            cout << "a posicao inicial e:  " << S0 << " m" << endl;

            cout << "Qual a velocidade inicial? (V0): ";
            cin >> V0;

            char velkm;
            cout << "A velocidade inicial esta em m/s ou km/hr?(m ou k):  ";
            cin >> velkm;

            while (velkm != 'm' && velkm != 'M' && velkm != 'k' && velkm != 'K')
            {
                cout << "Opcao invalida. Digite novamente (m ou k): ";
                cin >> velkm;
            }
            if (velkm == 'k' || velkm == 'K')
            {
                V0 = V0 * 1000 / 3600;
            }

            cout << "A velocidade em m/s é: " << V0 << " m/s" << endl;

            cout << "Digite a aceleração (a): ";
            cin >> a;

            char acel;
            cout << "A aceleracao esta em m/s^2 ou km/h^2?(m ou k): ";
            cin >> acel;

            while (acel != 'm' && acel != 'M' && acel != 'k' && acel != 'K')
            {
                cout << "Opcao invalida. Digite novamente (m ou k): ";
                cin >> acel;
            }
            if (acel == 'K' || acel == 'k')
            {
                a = a * 1000 / (3600 * 3600);
            }

            cout << "A aceleracao em m/s^2: " << a << "m/s^2" << endl;

            cout << "Digite o tempo (t): ";
            cin >> t;

            char seg;
            cout << "Esta em segundos, minutos ou horas?(s, m, h): ";
            cin >> seg;

            while (seg != 's' && seg != 'S' && seg != 'm' && seg != 'M' && seg != 'h' && seg != 'H')
            {
                cout << "Opcao invalida. Digite novamente (s, m ou h): ";
                cin >> seg;
            }
            if (seg == 'm' || seg == 'm')
            {
                t = t * 60;
            }
            else if (seg == 'h' || seg == 'H')
            {
                t = t * 3600;
            }
            else if (seg == 's' || seg == 'S')
            {
                t = t;
            }

            s = S0 + V0 * t + 0.5 * a * t * t;

            cout << "\n==================================================================" << endl;
            cout << "A posicao final em funcao do tempo do objeto e: " << t << "s e: " << s << " m" << endl;
            cout << "==================================================================\n"
                 << endl;

            cout << "\n--- Valores convertidos ---\n";
            cout << "S0 = " << S0 << " m" << endl;
            cout << "V0 = " << V0 << " m/s" << endl;
            cout << "a  = " << a << " m/s^2" << endl;
            cout << "t  = " << t << " s" << endl;
        }
        else if (opcao == 2)
        {
            cout << "obrigado por ultilizar ;)" << endl;
        }
        else
        {
            cout << "Opcao invalida (1 ou 2)";
        }

    } while (opcao != 2);
    return 0;
}
