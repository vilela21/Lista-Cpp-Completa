#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float notaUm, notaDois, notaTres;
    float pesoUm, pesoDois, pesoTres;
    float media;
    
    cout << "Digite o valor da primeira nota: ";
    cin >> notaUm;
    cout << "Digite o peso da primeira nota:  ";
    cin >> pesoUm;
     cout << "Digite o valor da segunda nota:  ";
    cin >> notaDois;
     cout << "Digite o peso da segunda nota:  ";
    cin >> pesoDois;
    cout << "Digite o valor da terceira nota:  ";
    cin >> notaTres;
     cout << "Digite o peso da terceira nota:  ";
    cin >> pesoTres;
    
    media = (notaUm * pesoUm + notaDois * pesoDois + notaTres * pesoTres) / (pesoUm + pesoDois + pesoTres);
    
    cout << "\n A media ponderada é: " << media;
    return 0;
}
