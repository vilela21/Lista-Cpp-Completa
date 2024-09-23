#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float raio, altura, volume;
    
    cout << "Digite o raio de um cilindro: ";
    cin >> raio;
    cout << "Digite a altura deste círculo: ";
    cin >> altura;
    volume = M_PI * (raio * raio) * altura;
    cout << "O volume deste cilindro é de: " << volume;
    return 0;
}
