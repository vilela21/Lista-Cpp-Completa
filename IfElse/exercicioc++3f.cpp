#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cout << "Digite um número:  ";
    cin >> x;
    
    if (x % 2 == 0){
        cout << "Esse número é Par."; 
    }
   else {
       cout << "Esse número é Ímpar.";
   }
    return 0;
}
