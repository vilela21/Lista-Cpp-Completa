#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    cout << "A temperatura em Fahrenheit é: " << fahrenheit << endl;

    return 0;
}
