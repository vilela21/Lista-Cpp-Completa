    #include <iostream>
    using namespace std;
    int main()
    {
        int mes;
        
        cout<<"Olá, escolha um mês de 1 a 12 sendo: ";
        cout<<"\n[1] Janeiro ";
        cout<<"\n[2] Fevereiro ";
        cout<<"\n[3] Março ";
        cout<<"\n[4] Abril ";
        cout<<"\n[5] Maio ";
        cout<<"\n[6] Junho ";
        cout<<"\n[7] Julho ";
        cout<<"\n[8] Agosto ";
        cout<<"\n[9] Setembro ";
        cout<<"\n[10] Outubro ";
        cout<<"\n[11] Novembro ";
        cout<<"\n[12] Dezembro ";
        cout<<"\n Escolha um mês: ";
        cin >> mes;
        
        if (mes == 4 || mes == 5 || mes == 9 || mes == 11) {
            cout<<"Seu mês escolhido tem cerca de 30 dias. ";
        }
        else if (mes == 1 || mes == 3 || mes == 6 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
            cout<<"Seu mês escolhido tem cerca de 31 dias. ";
        }
        else if (mes == 2) {
            cout<<"Seu mês escolhido tem cerca de 28 dias. (Caso for ano Bissexto 29 dias.) ";
        }
        return 0;
    }