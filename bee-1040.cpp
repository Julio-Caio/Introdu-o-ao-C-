#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    float n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    float media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / (2 + 3 + 4 + 1);

    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if (media >= 7){
        cout << "Aluno aprovado." << endl;
    }

    else if (media >= 5 and media <= 6.9){
        cout << "Aluno em exame." << endl;

        float exame;
        cin >> exame;

        cout << "Nota do exame: " << exame << endl;

        if (((exame + media) / 2) >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << ((exame + media) / 2) << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << ((exame + media) / 2) << endl;
        }
    }

    else if(media < 5)
    {
            cout << "Aluno reprovado.";
    }

    return 0;
}