#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
    float arr[6];
    int count_positivos = 0;
    float soma;

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];

        if (arr[i] > 0)
        {
            count_positivos++;
            soma += arr[i];
        }
    }

    float media = soma / count_positivos ;

    cout << count_positivos << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;

    return 0;
}