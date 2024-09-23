#include <iostream>
       #include <iostream>
using namespace std;

int main() {
    string nome;
    int idade;

    cout << "Digite seu nome: ";
    getline(cin, nome); 

    cout << "Digite sua idade: ";
    cin >> idade;

    if (nome.length() > 3 && idade >= 18) {
        cout << "Acesso Permitido." << endl;
    } else {
        cout << "Acesso Negado." << endl;
    }

    return 0;
}
