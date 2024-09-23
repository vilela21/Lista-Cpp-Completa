#include <iostream>
using namespace std;

int main() {
    int n, num, maior;

    cout << "Insira um número: ";
    cin >> num;
    maior = num;

    for (int i = 1; i < 4; i++) { 
        cout << "Insira outro número: ";
        cin >> num;

        if (num > maior) {
            maior = num; 
        }
    }

    cout << "O maior número inserido foi: " << maior << endl;

    return 0;
}
