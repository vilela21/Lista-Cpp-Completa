#include <iostream>
       using namespace std;
    int main() {
        int num;
    
     
       cout << "Digite um número inteiro positivo: ";
       cin >> num;
    
        int i = 0;
    
      cout << "Números pares entre 0 e " << num << ":" << endl;
        while (i <= num) {
            cout << i << " ";
            i += 2;  
        }
        cout << endl;
    
        return 0;
    }