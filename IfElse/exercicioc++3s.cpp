 #include <iostream>
using namespace std;

int main() {
    char acucar;
    char leite;

    cout << "Você deseja adicionar açúcar ao seu café? [S]/[N]: ";
    cin >> acucar;

    cout << "E leite, deseja adicionar ao seu café? [S]/[N]: ";
    cin >> leite;

    if (acucar == 'S' || acucar == 's' || leite == 'S' || leite == 's') {
        cout << "Café com adicional preparado!" << endl;
    } else {
        cout << "Café sem adicional preparado!" << endl;
    }

    return 0;
}
