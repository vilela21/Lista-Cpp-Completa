#include <iostream>
using namespace std;

int main() {
   
    for (int num = 5; num <= 10; num++) {
        cout << "Tabuada do " << num << ":" << endl;

        for (int i = 1; i <= 10; i++) {
            cout << num << " x " << i << " = " << num * i << endl;
        }

        cout << endl;
    }

    return 0;
}

