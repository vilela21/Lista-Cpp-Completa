#include <iostream>
#include <vector>

using namespace std;

int main() {
 
    vector<int> numeros = {3, 1, 14, 10};

    int menor = numeros[0];

    for (int i = 0; i < numeros.size(); i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    cout << "O maior valor deste vetor é: " << menor << endl;
  
    return 0;
}
