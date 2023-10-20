#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void excluirMenorMaior(float arr_notas[], int tamanho) {
    float menor = arr_notas[0];
    float maior = arr_notas[tamanho - 1];

    for (int i = 0; i < tamanho; i++) {
        if (arr_notas[i] == menor) {
            arr_notas[i] = 0;
        }
        if (arr_notas[i] == maior) {
            arr_notas[i] = 0;
        }
    }
}

int main() {
    int num_competidores;
    cin >> num_competidores;

    for (int k = 0; k < num_competidores; k++) {
        string nome_competidor;
        float grau_dificuldade;
        int tamanho = 7;
        float arr_notas[tamanho];

        cin >> nome_competidor;
        cin >> grau_dificuldade;

        for (int i = 0; i < tamanho; i++) {
            cin >> arr_notas[i];
        }

        // ordenar os valores do menor para o maior, afim de quando for excluir o menor e o maior, não excluir os valores errados
        sort(arr_notas, arr_notas + tamanho);
        excluirMenorMaior(arr_notas, tamanho);

        float soma = 0.0;
        for (int i = 0; i < tamanho; i++) {
            soma += arr_notas[i];
        }

        float resultado = soma * grau_dificuldade;

        cout << nome_competidor << " " << fixed << setprecision(2) << resultado << endl;
    }

    return 0;
}