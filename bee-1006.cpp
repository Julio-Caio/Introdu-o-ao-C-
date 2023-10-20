#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int qtde_positivos;
    double media;
    double number1, number2, number3; 

    cin >> number1;
    cin >> number2;
    cin >> number3;

    media = ((number1 * 2) + (number2 * 3) + (number3 * 5)) / 10;

    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;

    return 0;
}