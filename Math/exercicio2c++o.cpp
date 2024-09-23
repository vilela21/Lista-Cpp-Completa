#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double raio, area;
    
    cout << "Digite o raio de um círculo: ";
    cin >> raio;
    area = M_PI * (raio * raio);
    cout << "A área deste círculo, é de: " << area;
    return 0;
}
