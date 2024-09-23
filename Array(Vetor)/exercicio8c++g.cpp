#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  
    vector<string> nomes(5);

    cout << "Digite 5 nomes:" << endl;
    for (int i = 0; i < nomes.size(); i++) {
        cout << "Nome " << i + 1 << ": ";
        getline(cin, nomes[i]); 
    }

    sort(nomes.begin(), nomes.end());

    cout << "\nAgora os nomes em ordem alfabética:" << endl;
    for (int i = 0; i < nomes.size(); i++) {
        cout << nomes[i] << endl;
    }

    return 0;
}
