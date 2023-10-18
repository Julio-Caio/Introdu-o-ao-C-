#include <iostream>
using namespace std;

void notesCount(int value) {
    int qtde_notas[7];

    int notes_acima_1[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++) {
        qtde_notas[i] = value / notes_acima_1[i];
        value -= qtde_notas[i] * notes_acima_1[i];
    }

    for (int i = 0; i < 7; i++) {
        cout << qtde_notas[i] << " nota(s) de R$ " << notes_acima_1[i] << ",00" << endl;
    }
}

int main() {
    int value;
    cin >> value;
    cout << value << endl;
    notesCount(value);

    return 0;
}