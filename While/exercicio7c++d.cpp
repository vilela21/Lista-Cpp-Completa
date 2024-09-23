#include <iostream>
using namespace std;

int main() {
    string senha, tentativa;
    int i = 0;

    cout << "Defina uma senha para o login: ";
    cin >> senha;

    while (i < 3) {
        cout << "Insira a senha: ";
        cin >> tentativa;

        if (tentativa == senha) {
            cout << "Senha correta! Acesso concedido." << endl;
            return 0; 
        } else {
            cout << "Senha incorreta. " << endl;
            i++; 
        }
    }

    return 0; 
}
