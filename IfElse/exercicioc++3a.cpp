#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cout << "Digite um número:  ";
    cin >> x;
    cout << "Digite outro número: ";
    cin >> y; 
    
    if (x > y){
        cout << "O primeiro número é maior que o segundo.";
    }
    else if (x <= y){
        cout << "O primeiro número não é maior que o segundo.";
    }
    return 0;
}
