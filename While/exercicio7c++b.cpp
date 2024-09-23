 #include <iostream>
    using namespace std;
    
    int main() {
       
       int num;
       int j = 1;
       
       cout <<"Digite um número e exibirei a tabuada dele até o 10: ";
       cin >> num;
         
         cout << "Tabuada do " << num << ":" << endl;
         
      while (j <= 10) {
                cout << num << " x " << j << " = " << num*j << "\n";
           j++;
        } 
        return 0;
    }