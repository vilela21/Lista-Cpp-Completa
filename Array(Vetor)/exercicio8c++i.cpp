#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int NUM_MESAS = 30; // Número de mesas
    const int LUGARES_POR_MESA = 5; // Lugares por mesa
    vector<int> reservas(NUM_MESAS, 0); // Vetor para armazenar reservas (inicializado com 0)
    int totalLugaresOcupados = 0; // Contador de lugares ocupados

    while (true) {
        int codigoMesa;
        int lugaresDesejados;

        cout << "Digite o código da mesa (100 a 129) ou 0 para sair: ";
        cin >> codigoMesa;

        if (codigoMesa == 0) {
            break;
        }

        if (codigoMesa < 100 || codigoMesa > 129) {
            cout << "Código de mesa inválido. Tente novamente." << endl;
            continue;
        }

        int indiceMesa = codigoMesa - 100;

        cout << "Digite a quantidade de lugares desejados (1 a 5): ";
        cin >> lugaresDesejados;

        if (lugaresDesejados < 1 || lugaresDesejados > LUGARES_POR_MESA) {
            cout << "Quantidade de lugares inválida. Tente novamente." << endl;
            continue;
        }

        if (reservas[indiceMesa] + lugaresDesejados <= LUGARES_POR_MESA) {
            reservas[indiceMesa] += lugaresDesejados; // Atualiza a reserva
            totalLugaresOcupados += lugaresDesejados; // Atualiza o total de lugares ocupados
            cout << "Reserva realizada com sucesso na mesa " << codigoMesa << " para " << lugaresDesejados << " lugar(es)." << endl;
        } else {
            cout << "Não foi possível realizar a reserva. A mesa " << codigoMesa << " já possui " << reservas[indiceMesa] << " lugar(es) ocupados." << endl;
        }

        if (totalLugaresOcupados >= NUM_MESAS * LUGARES_POR_MESA) {
            cout << "Todos os lugares estão ocupados." << endl;
            break;
        }
    }

    cout << "Sistema encerrado." << endl;
    return 0;
}

