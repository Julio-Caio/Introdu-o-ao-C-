#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int reoordenar(vector<int> &notas)
{
    vector<int> ordem_decrescente = notas;
    sort(ordem_decrescente.begin(), ordem_decrescente.end(), greater<int>());

    int n_trocaram = 0;

    for (int i = 0; i < notas.size(); i++)
    {
        if (notas[i] == ordem_decrescente[i])
        {
            n_trocaram += 1;
        }
    }

    return n_trocaram;
}

int main (void)
{
    int casos_teste;
    cin >> casos_teste;

    for (int i = 0; i < casos_teste; i++)
    {
        int n_alunos, nota;
        vector<int> notas;

        cin >> n_alunos;

        for (int j = 0; j < n_alunos; j++)
        {
            cin >> nota;
            notas.push_back(nota);
        }

        int notas_nao_reoordenadas = reoordenar(notas);

        cout << notas_nao_reoordenadas << endl;
    }

    return 0;
}