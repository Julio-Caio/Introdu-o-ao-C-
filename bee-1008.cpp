#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n_func, ttl_horas;
    float valor_p_hora;

    cin >> n_func;
    cin >> ttl_horas;
    cin >> valor_p_hora;

    cout << "NUMBER = " << n_func << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << ttl_horas * valor_p_hora << endl;
}