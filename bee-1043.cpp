#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool ehTriangulo(float a, float b, float c)
{
    if (a < b + c && b < a + c && c < a + b && (abs(b - c) < a) && (abs(a - c) < b) && (abs(a - b) < c))
        return true;
    else
        return false;
}

int main (void)
{
    float a, b, c;

    cin >> a >> b >> c;

    if (ehTriangulo(a, b, c))
    {
        float perimetro = a + b + c;
        cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
    }

    else
    {
        float area_trapezio = ((a + b) * c) / 2;
        cout << "Area = " << fixed << setprecision(1) <<  area_trapezio << endl;
    }

    return 0;
}