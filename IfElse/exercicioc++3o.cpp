    #include <iostream>
    using namespace std;
    int main()
    {
        char carro;
        char dinheiro;
        cout<<"Olá! Você deseja comprar um carro novo? [S]/[N]: ";
        cin>>carro;
        cout<<"Você tem dinheiro suficiente pra isso? [S]/[N]: ";
        cin>>dinheiro;
       
       if (carro == 'N' || carro == 'n') {
           cout<<"Ok, você não quer comprar um carro novo. " << endl; 
           return 0;
       }
        if ((carro == 'S' || carro == 's') && (dinheiro == 'S' || dinheiro == 's')) {
        cout<<"Parabéns, você pode comprar um carro novo!";
        }
        else {
            cout<<"Que pena, você não tem o suficiente comprar um carro novo. ";
        }
        return 0;
    }