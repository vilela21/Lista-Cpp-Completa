#include <iostream>
       #include <iostream>
using namespace std;

int main() {
   int num;
   
    cout << "Digite um número inteiro: ";
    cin >> num;

    if (num > 10 || num < 0) {
        cout << "Número Inválido! ";
    } else {
        cout <<"Seu número é: " << num;
    }

    return 0;
}
