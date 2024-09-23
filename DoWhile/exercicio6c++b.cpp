#include <iostream>
    using namespace std;
    
    int main() {
       
       int num;
       int i = 1;
       
       cout <<"Digite um número e exibirei a tabuada dele até o 10: ";
       cin >> num;
       
       do{
            cout << "Tabuada do " << num << ":" << endl;
            for(int j = 1; j <= 10; j++){
                cout << i << " x " << j << " = " << i*j << "\n";
            }
    
            i++;
            
        } while (i <= num);
    
        return 0;
    }
    
