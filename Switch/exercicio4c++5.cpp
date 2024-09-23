    #include <iostream>
    using namespace std;
    
    void menu(){
        cout <<"Escolha entre as seguintes velocidades: \n1. Baixa \n2. Média \n3. Alta\n\n";
    }
    
    int main()
    {
        int escolha;
       menu();
        cin >> escolha;
        
        switch (escolha) {
            case 1:
            cout << "Você está devagar, cerca de 30km/h. ";
            break;
            case 2: 
            cout << "Você está na média, cerca de 50km/h. ";
            break;
            case 3:
            cout << "Você está muito rápido! cerca de 100km/h. (PERIGO) ";
            break;
        }
        
        return 0;
    }