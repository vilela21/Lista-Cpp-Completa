    #include <iostream>
    using namespace std;
    int main()
    {
        int idade;
        char carteira;
        
        cout<<" Olá! Digite, quantos anos você tem: ";
        cin>>idade;
        cout<<"\n Você possui carteira de motorista? [S]/[N]: ";
       cin>>carteira;
       
        if (idade > 18 && (carteira == 'S') || (carteira == 's')) {
            cout<<"Você já pode dirigir. ";
        }
        else {
            cout<<"Você não pode dirigir. ";
        }
        return 0;
    }