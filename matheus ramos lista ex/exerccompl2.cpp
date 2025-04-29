#include <iostream>
using namespace std;

class Produto {
public:
    int codigo; 
    char nome[50];
    double precoCusto;
    double precoVenda;
    
    void cadastrarProduto(int cod, const char* n, double precoC, double precoV) {
        codigo = cod;
        int i;
        for (i = 0; n[i] != '\0'; i++) nome[i] = n[i];
        nome[i] = '\0'; 
        
        precoCusto = precoC;
        precoVenda = precoV;
    }

    double calcularLucro() {
        return precoVenda - precoCusto;
    }

    void exibirProduto() {
        cout << "Código: " << codigo << endl;
        cout << "Nome: " << nome << endl;
        cout << "Preço de Custo: " << precoCusto << endl;
        cout << "Preço de Venda: " << precoVenda << endl;
        cout << "Lucro: " << calcularLucro() << endl;
    }
};

class Loja {
public:
    char nome[50];
    char endereco[100];
    char telefone[15];
    char cnpj[20];
    Produto produtos[10]; 
    int quantidadeProdutos = 0;  

    void armazenarInformacoesLoja(const char* nomeLoja, const char* end, const char* tel, const char* cnpjLoja) {
        int i;
        for (i = 0; nomeLoja[i] != '\0'; i++) nome[i] = nomeLoja[i];
        nome[i] = '\0';

        for (i = 0; end[i] != '\0'; i++) endereco[i] = end[i];
        endereco[i] = '\0';

        for (i = 0; tel[i] != '\0'; i++) telefone[i] = tel[i];
        telefone[i] = '\0';

        for (i = 0; cnpjLoja[i] != '\0'; i++) cnpj[i] = cnpjLoja[i];
        cnpj[i] = '\0';
    }

    void exibirInformacoesLoja() {
        cout << "Nome da loja: " << nome << endl;
        cout << "Endereço: " << endereco << endl;
        cout << "Telefone: " << telefone << endl;
        cout << "CNPJ: " << cnpj << endl;
    }

    void cadastrarProduto(int cod, const char* nomeProduto, double precoCusto, double precoVenda) {
        if (quantidadeProdutos < 10) {
            produtos[quantidadeProdutos].cadastrarProduto(cod, nomeProduto, precoCusto, precoVenda);
            quantidadeProdutos++;
        } else {
            cout << "Espaço para cadastro de produtos esgotado!" << endl;
        }
    }

    void listarProdutos() {
        cout << "\nLista de Produtos cadastrados:\n";
        for (int i = 0; i < quantidadeProdutos; i++) {
            produtos[i].exibirProduto();
            cout << "------------------------------" << endl;
        }
    }
};

int main() {
    Loja loja;
    
    loja.armazenarInformacoesLoja("RamosStore", "Rua vascodagama, 1998", "47-992894873", "19.981.204/0002-06");
    
    loja.exibirInformacoesLoja();

    loja.cadastrarProduto(101, "EAFC 25", 200.00, 450.00);
    loja.cadastrarProduto(102, "Raimbow Six", 80.00, 150.00);

    loja.listarProdutos();
    
    cout << "Confesso que recebi uma ajuda neste exercicio" << endl;
    cout << "Feat GPT" << endl;
    
    return 0;
}
