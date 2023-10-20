#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int distancia_ttl;
    double ttl_combustivel;

    cin >> distancia_ttl;
    cin >> ttl_combustivel;

    cout << fixed << setprecision(3) << distancia_ttl / ttl_combustivel << " km/l" << endl;

    return 0;
}