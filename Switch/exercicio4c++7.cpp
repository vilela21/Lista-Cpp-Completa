#include <iostream>
    using namespace std;
    
    void menu(){
        cout <<"Você deseja realizar: \n1. Saque \n2. Depósito \n3. Consulta de Saldo\n\n";
    }
    
    int main()
    {
        int escolha;
       menu();
        cin >> escolha;
        
        switch (escolha) {
            case 1:
            cout << "Opção Saque - O SAQUE ESTÁ SENDO REALIZADO... ";
            break;
            case 2: 
            cout << "Opção Depósito - O DEPÓSITO ESTÁ SENDO FEITO... ";
            break;
            case 3:
            cout << "Opção Consulta - CONSULTANDO SALDO... ";
            break;
        }
        
        return 0;
    }