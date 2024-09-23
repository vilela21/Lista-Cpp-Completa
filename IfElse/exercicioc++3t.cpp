 #include <iostream>
using namespace std;

int main() {
   int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    if (num % 3 == 0) {
        cout <<"O número digitado é divisível por 3. ";
        return 0;
    }
   
    
    if (num % 5 == 0) {
        cout <<"O número digitado é divisível por 5. ";
        return 0;
    } 
    cout <<"O número digitado não é divisível nem por 3 nem por 5. ";
    return 0;
}
