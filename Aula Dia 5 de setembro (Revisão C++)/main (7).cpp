#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[10];
    int i;

        for(i=0; i<10; i++)
        {
        do{

            cout << "Informe o " << i+1 << "° número: ";
            cin >> vet[i];
         }while(vet[i] < 0);
        }

    cout << endl;

    cout << "Vetor: " << endl;

    for(i=0;i<10;i++)
    {
        cout << vet[i];
    }

    cout << endl;
    cout << "Vetor inverso: " << endl;

    for(i=9;i>=0;i--)
    {
        cout << vet[i];
    }

    return 0;
}
