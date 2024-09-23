#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, j;
    cout << "Digite um número:  ";
    cin >> x;
    cout << "Digite outro número: ";
    cin >> y; 
    cout << "Digite mais um número: ";
    cin >> j;
    
    if (x < y && x > j){
        cout << "O primeiro número é menor que o segundo e maior que o terceiro."; 
    }
    
    return 0;
}
