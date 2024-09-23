#include <iostream>
using namespace std;

int main() {
    
    string palavra;
    cout <<"Insira uma palavra: ";
    cin >> palavra;
    
    cout <<"A seguir cada letra da palavra que você escreveu: \n";
    for (int i = 0; i <= palavra.length(); i++) {
            cout << palavra[i] << "\n";
    }
    return 0;
}
