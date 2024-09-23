#include <iostream>
       #include <iostream>
using namespace std;

int main() {
   string resposta;
   
    cout << "Você deseja comprar um produto? [S]/[N]: ";
    cin >> resposta;

    if (resposta == "sim" || resposta == "s") {
        cout << "Obrigado pela compra! ";
    } else {
        cout <<"Ok, tenha um bom dia. ";
    }

    return 0;
}
