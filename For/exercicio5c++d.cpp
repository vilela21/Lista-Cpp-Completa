#include <iostream>
using namespace std;

int main() {
    
    int num, soma;
    cout <<"Insira um número: ";
    cin >> num;
    
    cout <<"A seguir a soma dos números: \n";
    for (int i = 1; i <= num; i++) {
           soma += i;
    }
    cout << soma;
    return 0;
}
