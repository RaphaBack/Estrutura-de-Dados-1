#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n[15];
    float res;
    int i;
    int cont = 0;

    for(i = 0;i < 6;i++)
    {
        cout << "Informe o " << i+1 << "° número: ";
        cin >> n[i];
    }

    for(i =0;i<6;i++)
    {
        cont += n[i];
    }

    cout << endl;
    cout << "Soma total é: " << cont << endl;

    cout << endl;

    for(i=0;i<6;i++)
    {
        cout << n[i];
    }




    return 0;
}
