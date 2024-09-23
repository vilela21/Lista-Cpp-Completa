 #include <iostream>
    using namespace std;
    
    void menu(){
        cout <<"Escolha o tamanho da seguinte camisa: \n1. P \n2. M \n3. G\n\n";
    }
    
    int main()
    {
        int escolha;
       menu();
        cin >> escolha;
        
        switch (escolha) {
            case 1:
            cout << "Camisa Tamanho (P), cerca de R$30,00. ";
            break;
            case 2: 
            cout << "Camisa Tamanho (M), cerca de R$40,00. ";
            break;
            case 3:
            cout << "Camisa Tamanho (G), cerca de R$60,00. ";
            break;
        }
        
        return 0;
    }