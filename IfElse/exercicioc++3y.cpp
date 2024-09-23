#include <iostream>
       #include <iostream>
using namespace std;

int main() {
    int num;
   
    cout << "Digite um número: ";
    cin >> num;

    if (num == 0) {
        cout << "O número é zero. Inválido! ";
        return 0;
    } else {
        cout <<"O número é diferente de zero. Válido! ";
    }

    return 0;
}
