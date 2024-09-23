#include <iostream>
using namespace std;

int main() {
    double preco, desconto, novoPreco;
    
    cout << "Digite o preço de um produto: R$";
    cin >> preco;
    cout << "Digite o desconto a ser aplicado no produto: %";
    cin >> desconto;
    
    novoPreco = preco - (preco * desconto / 100);

    cout <<"O produto que custa R$" << preco << "\n com desconto de " << desconto << "% é igual a: R$" << novoPreco;
    return 0;
}
