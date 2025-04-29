#include <iostream>
using namespace std;
int main()
{
    int dia;
    cout << "Digite um numero (1-7) para indicar o dia da semana: ";
    cin >> dia;

    if(dia == 1){
        cout << "Domingo";
    } else if(dia == 2){
        cout << "Segunda-feira";
    } else if(dia == 3){
        cout << "Terca-feira";
    } else if(dia == 4){
        cout << "Quarta-feira";
    } else if(dia == 5){
        cout << "Quinta-feira";
    } else if(dia == 6){
        cout << "Sexta-feira";
    } else if(dia == 7){
        cout << "Sabado";
    } else {
        cout << "ERRO, escolha um numero de 1-7";
    }

    cout << endl;


}