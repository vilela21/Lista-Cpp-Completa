#include <iostream>
using namespace std;

int main() {
   cout <<"A seguir todos os números primos entre 1 e 100: ";
   
   for (int num = 2; num <= 100; num++) {
       bool primo = true;
       
       for (int i = 2; i <= num / 2; i++) {
           if (num % i == 0) {
               primo = false;
               break;
           }
       }
       if (primo) {
           cout << "\n" << num << " ";
       }
   }
    return 0;
}