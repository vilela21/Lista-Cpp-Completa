#include <iostream>
       #include <iostream>
using namespace std;

int main() {
   string resposta;
   
    cout << "Você não é um robô? [S]/[N]: ";
    cin >> resposta;

    if (resposta == "nao" || resposta == "n" || resposta == "N") {
        cout << "Por favor, prove que você não é um robô. ";
        return 0;
    } else {
        cout <<"Ok, tmj camarada bem vindo. ";
    }

    return 0;
}
