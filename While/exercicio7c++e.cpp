#include <iostream>
    using namespace std;
    
    int main() {
        
       int num, quant, soma, negativo;
       int i = 1;
       
       cout <<"Digite uma sequência de números inteiros: ";
       cin >> quant;
       
       cout << "Lendo " << quant << " números \n";
       
       
             while (i <= quant) {
    
            cout << i << "° número: ";
            cin >> num;
            soma += num;
               if (num < 0) {
                   num - soma;
               }
            i++;
             }
      
           
            
        cout <<"\nA soma de todos os números é: " << soma;
          return 0;
    
    }