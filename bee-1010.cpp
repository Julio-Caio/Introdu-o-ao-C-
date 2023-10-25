#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
    int cod_peca1, num_peca1, cod_peca2, num_peca2;

    double valor_peca1, valor_peca2, valor_total;

    cin >> cod_peca1 >> num_peca1 >> valor_peca1;
    cin >> cod_peca2 >> num_peca2 >> valor_peca2;

    valor_total = (valor_peca1 * num_peca1) + (valor_peca2 * num_peca2);


    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << valor_total << endl;

    return 0;
}