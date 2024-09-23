    #include <iostream>
    using namespace std;
    
    int main() {
        
        int num;
        cout <<"Insira um número: ";
        cin >> num;
        
        for (int i = 2; i <= num; i++) {
               if (num % i != 0){
                   cout <<"O número digitado é primo. ";
                   break;
                   } else {
                       cout <<"O número digitado não é primo. ";
                       break;
                   }
               
        }
        return 0;
    }
