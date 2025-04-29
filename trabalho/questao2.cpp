#include <iostream>
using namespace std;

int main()
{
        string produto;
        double preco;

        cout << "====================================\n";
        cout << "           RAMOS'STORE              \n";
        cout << "====================================\n";
        cout << "  PRODUTOS:                         \n";
        cout << "* carrinho        =   R$50,00          \n";
        cout << "* boneca          =   R$75,00          \n"; 

        cout << "Qual brinquedo voce deseja comprar?: ";
        cin >> produto;

        if(produto == "carrinho"){
            preco = 50;
            cout << "Voce selecionou carrinho.";
        } else if(produto == "boneca"){
            preco = 75;
            cout << "voce selecinou boneca.";
        } else{
            cout << "opcao invalida, seleciona bola de futebol ou boneca";
            return 1;
        }

        cout << "\n========================\n";
        cout << "    FORMAS DE PAGAMENTO   \n";
        cout << "==========================\n";
        cout << "opcao 1 - A vista em dinheiro ou cheque 15% off \n";
        cout << "opcao 2 - A vista no cartao de credito, 10% off \n";
        cout << "opcao 3 - Em 2 vezes sem juros \n";
        cout << "opcao 4 - em tres vezes, juros 10%" << endl;

        int formaDePagamento;
        cout << "qual vai ser a forma de pagamento?: ";
        cin >> formaDePagamento; 

        if(formaDePagamento == 1 ){
           preco *= 0.85; 
            cout << "Pagamento a vista em dinheiro/chque. \n";
            cout << "Total a pagar: R$" << preco << endl;
        } else if(formaDePagamento == 2){
            preco *= 0.90;
            cout << "Pagamento a vista no cartao de credito. \n";
            cout << "Total a pagar: R$" << preco << endl;
        } else if(formaDePagamento == 3){
            cout << "Fica 2 parcelas de " << preco / 2 << endl;
        } else if (formaDePagamento == 4){
            preco = preco * 1.10;
            cout << "3 parcelas de R$" << preco / 3 << endl;
            cout << "Total a pagar: R$" << preco << endl;
        } else {
            cout << "Selecione uma opcao valida. ";
        }
        cout << "Obrigado por adquirir nossos produtos ;)";
        return 0;
}
