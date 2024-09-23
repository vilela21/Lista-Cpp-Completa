#include <iostream>
using namespace std;

int main() {
    
   int soma = 0;
   
  for (int i = 1; i <= 100; i++) {
           if (i % 2 == 0) {
              soma += i;
           }
       }
      cout <<"A soma de todos os números pares é: " << soma;

    return 0;
}