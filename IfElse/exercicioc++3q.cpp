    #include <iostream>
    using namespace std;
    int main()
    {
        char assinante;
        char serie;
        cout<<"Olá, você é assinante do nosso serviço de streamingn, Pobreflix? [S]/[N]: ";
        cin>>assinante;
        cout<<"Você já assistiu a série 'The Boys'? [S]/[N]: ";
        cin>>serie;
        
         if (assinante == 'N' || assinante == 'n') {
            cout<<"Que pena, você não é assinante do nosso serviço. ";
            return 0;
        }
        
        if (assinante == 'S' || assinante == 's' && serie == 'S' || serie =='s') {
        cout<<"Ótimo, agora você pode assistir à nova temporada! ";
        }
       else {
           cout<<"Parece que você ainda não assistiu a serie. ";
       }
        return 0;
    }