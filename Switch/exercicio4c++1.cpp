    #include <iostream>
    using namespace std;
    int main()
    {
        int escolha;
        cout<<"Digite um número de um a três, dependendo da hora do seu dia: ";
        cout<<"\nOpção 1 - (04:00 às 11:00) Bom Dia. ";
        cout<<"\nOpção 2 - (12:00 às 17:00) Boa Tarde. ";
        cout<<"\nOpção 3 - (18:00 às 23:00) Boa Noite. ";
        cout<<"\n";
        cin >> escolha;
        
        switch (escolha) {
            case 1:
            cout << "Bom Dia jogador! ";
            break;
            case 2: 
            cout << "Boa Tarde jogador! ";
            break;
            case 3:
            cout << "Boa Noite jogador! ";
            break;
        }
        
        return 0;
    }