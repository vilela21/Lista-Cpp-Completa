    #include <iostream>
    using namespace std;
    int main()
    {
        int idade;
        char diploma;
        cout<<"Olá, quantos anos você tem? ";
        cin>>idade;
        cout<<"Você possui o diploma de ensino superior? [S]/[N]: ";
        cin>>diploma;
        
        
        if (diploma == 'S' || diploma == 's' && idade > 21) {
        cout<<"Parabéns, você está qualificado para a vaga!";
        }
        else {
            cout<<"Que pena, você não é qualificado o suficiente para a vaga. ";
        }
        return 0;
    }