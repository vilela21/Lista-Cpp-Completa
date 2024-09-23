#include <iostream>
       #include <iostream>
using namespace std;

int main() {
    string resposta;
   
    cout << "Você é membro do clube? [S]/[N]: ";
    cin >> resposta;

    if (resposta ==  "S" || resposta ==  "s" || resposta == "sim") {
        cout << "Bem vindo(a) de volta membro! ";
        return 0;
    } else {
        cout <<"Por favor, atualize sua inscrição para continuar usufruindo dos benefícios do clube...";
    }

    return 0;
}
