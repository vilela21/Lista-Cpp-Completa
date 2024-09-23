#include <iostream>
using namespace std;

int main() {
    
    int x;
    cout <<"Digite um número: ";
    cin >> x;
    
    cout <<"Todos os números pares entre zero e o número escolhido: \n";
    for (int i = 0; i <= x; ++i) {
        if (i % 2 == 0){
            cout << i << "\n";
        }
    }
    return 0;
}
