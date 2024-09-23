#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   
    vector<int> numeros = {5, 3, 11, 10};

    sort(numeros.begin(), numeros.end(), greater<int>());

    cout << "O vetor em ordem decrescente: ";
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
