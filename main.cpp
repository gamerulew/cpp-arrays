#include <iostream>
#include "ArrayController.h"

using namespace std;

int main() {
    int selectedOption;
    ArrayController arrayController;
    arrayController.fill();
    do {
        cout
                << "1 - Adicionar número \t 2 - Remover número \t 3 - Listar números \t 4 - Trocar posições \t 5 - Inverter posições \t 6 - Limpar \t 7 - Preenchimento automático \t 0 - Sair"
                << endl;
        cin >> selectedOption;
        int num;
        bool feedback;
        vector<int> copy;
        switch (selectedOption) {
            case 1:
                cout << "Digite um número: ";
                cin >> num;
                feedback = arrayController.addInt(num);
                if (feedback) {
                    cout << "Adicionado com sucesso!" << endl;
                } else {
                    cout << "Erro ao adicionar :(" << endl;
                }
                break;
            case 2:
                cout << "Digite um número: ";
                cin >> num;
                feedback = arrayController.removeInt(num);
                if (feedback) {
                    cout << "Removido com sucesso!" << endl;
                } else {
                    cout << "Erro ao remover :(" << endl;
                }
                break;
            case 3:
                cout << "------------------------------------" << endl;
                copy = arrayController.getArray();
                for (int i = 0; i < copy.size(); i++) {
                    cout << "Número na posição " << i << ": ";
                    cout << copy[i] << endl;
                }
                break;
            case 4:
                int anotherNumber;
                cout << "Digite um número: " << endl;
                cin >> num;
                cout << "Digite outro número: " << endl;
                cin >> anotherNumber;
                if (arrayController.changeIndex(num, anotherNumber)) {
                    cout << "Números trocados de posição com sucesso!" << endl;
                } else {
                    cout << "Erro ao trocar posição dos números" << endl;
                }
                break;
            case 5:
                if (arrayController.revert()) {
                    cout << "Números invertidos de posição com sucesso!" << endl;
                } else {
                    cout << "Erro ao trocar posição dos números" << endl;
                }
                break;
            case 6:
                if (arrayController.clear()) {
                    cout << "Vetor limpado com sucesso!" << endl;
                } else {
                    cout << "Erro ao limpar vetor" << endl;
                }
                break;
            case 7:
                if (arrayController.clear()) {
                    cout << "Vetor limpado com sucesso!" << endl;
                } else {
                    cout << "Erro ao limpar vetor" << endl;
                }
                break;
            default:
                selectedOption = 0;
                cout << "Terminado" << endl;
                break;
        }
    } while (selectedOption != 0);


    return 0;
}
