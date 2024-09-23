#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
   
    vector<int> numeros = {5, 3, 11, 10};

    sort(numeros.begin(), numeros.end());

    cout << "O vetor em ordem crescente: ";
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
