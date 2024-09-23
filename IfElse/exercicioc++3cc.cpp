#include <iostream>
       #include <iostream>
using namespace std;

int main() {
    int ladoUm, ladoDois, ladoTres;
   
    cout << "Digite um lado de um triângulo: ";
    cin >> ladoUm;
    cout << "Digite mais um lado deste triângulo: ";
    cin >> ladoDois;
    cout << "Digite outro lado de deste triângulo: ";
    cin >> ladoTres;
    
    if (ladoUm == ladoDois && ladoDois == ladoTres) {
        cout << "O triângulo é equilátero. ";
        return 0;
    } 
   else if (ladoUm == ladoDois || ladoDois == ladoTres || ladoUm == ladoTres) {
        cout << "O triângulo é isósceles.";
} else {
    cout <<"O triângulo é escaleno. ";
}
    return 0;
}
