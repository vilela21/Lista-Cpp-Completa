#include <iostream>
       #include <iostream>
using namespace std;

int main() {
   string nome;
   
    cout << "Digite seu nome: ";
    cin >> nome;

    if (nome == "Wilson" || nome == "Gloria") {
        cout << "Olá, bem vindo(a) de volta! ";
    } else {
        cout <<"Usuário não reconhecido. ";
    }

    return 0;
}
