    #include <iostream>
    using namespace std;
    
    int main() {
        
       int num, quant, soma;
       int i = 1;
       
       cout <<"Digite uma sequência de números inteiros: ";
       cin >> quant;
       
       cout << "Lendo " << quant << " números \n";
       
       do{
            
    
            cout << i << "° número: ";
            cin >> num;
            soma += num;
               
            i++;
            
       } while (i <= quant);
           
            
        cout <<"\nA soma de todos os números é: " << soma;
          return 0;
    
    }
