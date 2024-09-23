#include <iostream>
#include <iostream>

using namespace std;

int main() {
    const int NUM_MERCADORIAS = 5; 
    double precoCompra, precoVenda;
    
    int lucroMenor10 = 0;
    int lucroEntre10e20 = 0;
    int lucroMaior20 = 0;

    for (int i = 0; i < NUM_MERCADORIAS; i++) {
        cout << "Mercadoria " << (i + 1) << endl;
        cout << "Digite o preço de compra: ";
        cin >> precoCompra;
        cout << "Digite o preço de venda: ";
        cin >> precoVenda;

        double lucroPercentual = ((precoVenda - precoCompra) / precoCompra) * 100;

        if (lucroPercentual < 10) {
            lucroMenor10++;
        } else if (lucroPercentual <= 20) {
            lucroEntre10e20++;
        } else {
            lucroMaior20++;
        }
    }

    cout << "\nMercadorias com lucro < 10%: " << lucroMenor10 << endl;
    cout << "\nMercadorias com 10% <= lucro <= 20%: " << lucroEntre10e20 << endl;
    cout << "\nMercadorias com lucro > 20%: " << lucroMaior20 << endl;

    return 0;
}
