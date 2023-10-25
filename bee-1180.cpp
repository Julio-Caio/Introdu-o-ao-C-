#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int menor(const vector<int> &arr)
{
    int menor_num = arr[0];
    int menor_pos;

    for (int i=0; i < arr.size(); i++)
    {
        if (arr[i] <= menor_num)
        {
            menor_num = arr[i];
            menor_pos = i;
        }
    }

    return menor_num;
}

int main()
{
   int tam_arr;
   cin >> tam_arr;

   vector<int> arr(tam_arr);
   int number;

    for (int i=0; i < tam_arr; i++)
    {
         cin >> number;
         arr[i] = number;
    }

   int menor_num = menor(arr);
   int posicao = distance(arr.begin(), find(arr.begin(), arr.end(), menor_num));

   cout << "Menor valor: " << menor_num << endl;
   cout << "Posicao: " << posicao << endl;

   return 0;
}