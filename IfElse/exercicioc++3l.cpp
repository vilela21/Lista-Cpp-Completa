#include <iostream>
using namespace std;

int main()
{
    int x, y, diferenca;
    
    cout <<"Digite um número inteiro: ";
    cin >> x;
    cout << "Digite outro número inteiro: ";
    cin >> y;
    diferenca = x - y;
    
    if (diferenca < 10) {
        cout <<"A diferença entre os números digitados são menores que 10. ";
    }
    else if (diferenca == 10) {
        cout <<"A diferença entre os números digitados são iguais a 10. ";
    }
    return 0;
}