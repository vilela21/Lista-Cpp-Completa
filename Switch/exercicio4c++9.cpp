#include <iostream>
using namespace std;

void menu() { 
    cout <<"Escolha um mês digitando seu respectivo número: \n[1] Janeiro. \n[2] Fevereiro. \n[3] Março. \n[4] Abril. \n[5] Maio.";
    cout <<"\n[6] Junho. \n[7] Julho. \n[8] Agosto. \n[9] Setembro. \n[10] Outubro. \n[11] Novembro. \n[12] Dezembro.\n\n";
}
int main()
{
    menu();
    int escolha; 
    cin >> escolha;
    
    switch(escolha){
        case 4:
        cout <<"Seu mês escolhido tem cerca de 30 dias. ";
        break;
        
         case 5:
        cout <<"Seu mês escolhido tem cerca de 30 dias. ";
        break;
        
         case 9:
        cout <<"Seu mês escolhido tem cerca de 30 dias. ";
        break;
        
         case 11:
        cout <<"Seu mês escolhido tem cerca de 30 dias. ";
        break;
        
         case 1:
        cout <<"Seu mês escolhido tem cerca de 31 dias. ";
        break;
        
         case 3:
        cout <<"Seu mês escolhido tem cerca de 31 dias. ";
        break;
        
         case 6:
        cout <<"Seu mês escolhido tem cerca de 31 dias. ";
        break;
        
         case 7:
        cout <<"Seu mês escolhido tem cerca de 31 dias. ";
        break;
        
         case 8:
        cout <<"Seu mês escolhido tem cerca de 31 dias. ";
        break;
        
         case 10:
        cout <<"Seu mês escolhido tem cerca de 31 dias. ";
        break;
        
         case 12:
        cout <<"Seu mês escolhido tem cerca de 31 dias. ";
        break;
        
         case 2:
        cout <<"Seu mês escolhido tem cerca de 28 dias. (Caso for ano Bissexto 29 dias.) ";
        break;
    }
    
    return 0;
}