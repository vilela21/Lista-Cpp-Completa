#include <iostream>
       #include <iostream>
using namespace std;

int main() {
    string resposta;
   
    cout << "Você deseja cancelar a operação? [S]/[N]: ";
    getline (cin, resposta);

    if (resposta == "N" || resposta == "n" || resposta == "nao" || resposta == "não") {
        cout << "Por favor, confirme o cancelamento da operação. ";
        return 0;
    } else {
        cout <<"Ok, operação em andamento.";
    }

    return 0;
}
