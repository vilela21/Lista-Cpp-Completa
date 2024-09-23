    #include <iostream>
    using namespace std;
    int main()
    {
        int x, y, escolha;
        
        cout<<"Digite um número: ";
        cin >> x;
        cout<<"\nDigite outro número: ";
        cin >> y;
        cout<<"\nEscolha um tipo de operação para que façamos com os dois números: ";
        cout<<"\nOpção 1 - Adição.";
        cout<<"\nOpção 2 - Subtração.";
        cout<<"\nOpção 3 - Multiplicação.";
        cout<<"\nOpção 4 - Divisão.";
        cout<< "\n ";
        cin>> escolha;
        
        switch (escolha) {
            case 1:
            cout << "O primeiro número adicionado ao segundo é igual à: " << x+y;
            break;
            case 2: 
            cout << "O primeiro número subtraído pelo segundo é igual à: " << x-y;
            break;
            case 3:
            cout << "O primeiro número multiplicado pelo segundo é igual à: " << x*y;
            break;
            case 4:
             cout << "O primeiro número dividido pelo segundo é igual à: " << x/y;
            break;
        }
    
        return 0;
    }