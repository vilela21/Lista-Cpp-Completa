    #include <iostream>
    using namespace std;
    int main()
    {
        int escolha;
        cout<<"Digite um dia da semana e direi se é um dia útil ou não: ";
        cout<<"\nOpção 1 - Segunda ";
        cout<<"\nOpção 2 - Terça ";
        cout<<"\nOpção 3 - Quarta ";
        cout<<"\nOpção 4 - Quinta ";
        cout<<"\nOpção 5 - Sexta ";
        cout<<"\nOpção 6 - Sábado ";
        cout<<"\nOpção 7 - Domingo ";
        cout<<"\n\n";
        cin >> escolha;
        
        switch (escolha) {
            case 1:
            cout << "Segunda-Feira é dia útil. ";
            break;
            case 2: 
            cout << "Terça-Feira é dia útil. ";
            break;
            case 3:
            cout << "Quarta-Feira é dia útil. ";
            break;
            case 4:
            cout << "Quinta-Feira é dia útil. ";
            break;
            case 5:
            cout << "Sexta-Feira é dia útil. (Sextou) ";
            break;
            case 6:
            cout << "Sabádo não é dia útil. (Sabadou) ";
            break;
            case 7:
            cout << "Domingo não é dia útil. ";
            break;
        }
        
        return 0;
    }