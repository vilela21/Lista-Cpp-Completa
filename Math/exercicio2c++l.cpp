#include <iostream>
#include <iomanip>
#include <cmath>
int main() {
    double peso;
    double altura;
std::cout << "Digite seu peso corporal: ";
std::cin >> peso;
std::cout << "Digite sua altura: ";
std::cin >> altura;
double imc = peso/(altura*altura);
std::cout << std::fixed << std::setprecision(6);
std::cout << "Seu (IMC) Índice de Massa Corporal é de: " << imc;
    return 0;
}