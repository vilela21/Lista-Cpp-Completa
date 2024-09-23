    #include <iostream>
    using namespace std;
    
    void menu(){
        cout <<"Escolha entre as seguintes opções: \n1. Cachorro \n2. Gato \n3. Pássaro\n\n";
    }
    
    int main()
    {
        int escolha;
       menu();
        cin >> escolha;
        
        switch (escolha) {
            case 1:
            cout << "Parabéns, você escolheu Cachorro. (Au, Au!) ";
            break;
            case 2: 
            cout << "Parabéns, você escolheu Gato. (Miau!) ";
            break;
            case 3:
            cout << "Parabéns, você escolheu Pássaro. (Au, Au!) ";
            break;
        }
        
        return 0;
    }