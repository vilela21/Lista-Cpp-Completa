#include <iostream>
using namespace std;
int main()
{
    string estado;
    string cidade;
    string bairro;
    string rua;
    int numero;
    cout << "\nDigite seu estado: ";
    cin >> estado;
    cout << "\nDigite sua cidade: ";
    cin >> cidade;
    cout << "\nDigite seu bairro: ";
    cin >> bairro;
    cout << "\nDigite sua rua: ";
    cin >> rua;
    cout << "\nDigite o número da sua casa: ";
    cin >> numero;
    cout << "Você é do estado de " << estado << ", é da cidade de " << cidade << ", mora no bairro: " << bairro << " na rua: " << rua << " e o número da sua casa é: " << numero;
    
    return 0;
}