#include <iostream>
using namespace std;

int main() {
    
    cout <<"Todos os números pares de 1 a 100: \n";
    for (int i = 1; i <= 100; ++i) {
        if (i % 2 == 0){
            cout << i << "\n";
        }
    }
    return 0;
}
