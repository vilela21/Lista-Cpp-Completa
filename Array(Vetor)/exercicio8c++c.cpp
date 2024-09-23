#include <iostream>
#include <vector>

using namespace std;

int main() {
 
    vector<int> numeros = {5, 6, 10, 1};

    int maior = numeros[0];

    for (int i = 0; i < numeros.size(); i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    cout << "O maior valor deste vetor é: " << maior << endl;
  
    return 0;
}
