#include <iostream>
#include <vector>

using namespace std;

int main() {
 
    vector<double> numeros = {10.5, 15.5, 20.5};

    double soma = 0.0;

    for (int i = 0; i < numeros.size(); i++) {
        soma += numeros[i];
    }

    double media = soma / numeros.size();

    cout << "Soma dos valores do vetor: " << soma << endl;
    cout << "Média desses valores: " << media << endl;

    return 0;
}
