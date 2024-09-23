#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cout << "Digite um número:  ";
    cin >> x;
    cout << "Digite outro número: ";
    cin >> y; 
    
    if (x < y){
        cout << "O primeiro número é menor que o segundo.";
    }
    
    return 0;
}
