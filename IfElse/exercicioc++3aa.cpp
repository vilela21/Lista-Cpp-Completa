#include <iostream>
       #include <iostream>
using namespace std;

int main() {
    string palavra;
   
    cout << "Digite uma palavra: ";
    getline (cin, palavra);

    if (!palavra.empty()) {
        cout << "A palavra não é vazia. ";
        return 0;
    } else {
        cout <<"A palavra é vazia. ";
    }

    return 0;
}
