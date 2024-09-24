#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n[7];
    int i;
    int cont1 = 0;
    int cont2 = 0;

    for(i=0;i<7;i++)
    {
        cout << "Informe o " << i+1 << "° número: ";
        cin >> n[i];
    }

    cout << endl;
    cout << "Vetor: " << endl;

    for(i=0;i<7;i++)
    {
        cout << n[i] << " ";
    }

    cout << endl;

    for(i=0;i<7;i++)
    {
        if(n[i] % 3 == 0)
            cont1 += 1;
        if(n[i] % 7 == 0)
            cont2 += 1;
    }

    cout << endl;

    cout << "Números dívisiveis por 3: " << endl;
    for(i=0;i<7;i++)
    {
       if(n[i] % 3 == 0)
        cout << n[i] << "  ";
    }

    cout << endl;

    cout << "Números dívisiveis por 7: " << endl;
    for(i = 0; i<7;i++)
    {
        if(n[i] % 7 == 0)
            cout << n[i] << " ";
    }

    cout << endl;
    cout << "Números dívisiveis por 3: " << cont1;
    cout << endl;
    cout << "Números divisiveis por 7: " << cont2;

    return 0;
}
