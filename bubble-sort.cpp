#include <iostream>

using namespace std;

// definir algoritmo de bubble sort
void bubble_sort(char string[], int n) // n = numero de elementos no array
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(string[j] > string[j + 1])
            {
                char aux = string[j];
                string[j] = string[j + 1];
                string[j + 1] = aux;
            } 
        }
    }
}

int main()
{
    char string_alfa[51];
    
    cin >> string_alfa;

    int n = size_t(string_alfa) - 1;

    bubble_sort(string_alfa, n);

    for (int i= 0; i < n; i++)
    {
        cout << string_alfa[i] << ":" << string_alfa[i] << endl;
    }

    return 0;
}