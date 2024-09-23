    #include <iostream>
    using namespace std;
    
    int main()
    {
        double x;
        double y;
        cout <<"Digite um número real: ";
        cin >> x;
        cout <<"Digite outro número real: ";
        cin >> y;
    
        if (x < y) {
            cout <<"O primero número é menor que o segundo número.";
        }
        else if (x == y) {
        cout <<"O primeiro número é igual ao segundo número.";
        }
        return 0;
    }