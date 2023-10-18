#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int num;
    double formula;

    cin >> num;
    formula = (4.0/3.0) * 3.14159 * pow(num, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << formula << endl;
}