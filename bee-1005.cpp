#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, result;
    cin >> a >> b;
    result = ((a * 3.5) + (b * 7.5)) / 11;
    cout <<"MEDIA = " << fixed << setprecision(5) << result << endl;

    return 0;
}