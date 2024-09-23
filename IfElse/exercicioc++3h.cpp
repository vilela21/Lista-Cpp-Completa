#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int ano;
    cout << "Digite um ano:  ";
    cin >> ano;
    
    if (ano % 4 == 0 && ano % 100 != 0 ){
        cout << "O ano digitado é bissexto."; 
    }
   else {
       cout << "O ano digitado não é bissexto.";
   }
    return 0;
}
