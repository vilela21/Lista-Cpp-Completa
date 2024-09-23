#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int NUM_NUMEROS = 100; // total de números
    vector<double> numeros(NUM_NUMEROS); // vetor para armazenar os números
    double soma = 0.0; // variável para armazenar a soma dos números

    // leitura dos 100 números
    cout << "Digite 100 números reais:" << endl;
    for (int i = 0; i < NUM_NUMEROS; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i];
        soma += numeros[i]; // atualizando a soma
    }

    // calculando a média
    double media = soma / NUM_NUMEROS;

    // inicializando contadores
    int contagem30 = 0;
    int contagemMaiorMedia = 0;
    int contagemIgualMedia = 0;

    // contando números de acordo com as condições
    for (int i = 0; i < NUM_NUMEROS; i++) {
        if (numeros[i] == 30) {
            contagem30++;
        }
        if (numeros[i] > media) {
            contagemMaiorMedia++;
        }
        if (numeros[i] == media) {
            contagemIgualMedia++;
        }
    }

    cout << "Números iguais a 30: " << contagem30 << endl;
    cout << "Números maiores que a média: " << contagemMaiorMedia << endl;
    cout << "Números iguais à média: " << contagemIgualMedia << endl;

    return 0;
}
