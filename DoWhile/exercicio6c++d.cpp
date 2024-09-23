#include <iostream>
using namespace std;

int main()
{
    string senha, tentativa;
    int i = 0;
    
    cout<<"Defina uma senha para o login: ";
    cin>> senha;
    
    cout<<"Insira a senha: ";
        cin >> tentativa;
        
        if (tentativa != senha) {
            i = 1;
    do{
            cout <<"Senha errada! Digite novamente: ";
            cin >> tentativa;
            
             if (tentativa == senha) {
        cout <<"Senha correta! ";
        break;
        }
        i++;
    } while (i < 3);
    

    }

    return 0;
}