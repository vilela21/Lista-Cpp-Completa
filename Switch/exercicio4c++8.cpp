#include <iostream>
    using namespace std;
    
    void menu(){
        cout <<"Enter a language: \n1. Portuguese(PT-BR) \n2. English\n";
    }
    
    int main()
    {
        int escolha;
       menu();
        cin >> escolha;
        
        switch (escolha) {
            case 1:
            cout << "Boa tarde e Bem-vindo(a) Usuário! ";
            break;
            case 2: 
            cout << "Good Afternoon and Welcome User! ";
            break;
        }
        
        return 0;
    }