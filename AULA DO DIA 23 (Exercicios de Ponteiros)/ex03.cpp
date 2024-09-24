#include <iostream>
#include <locale.h>

using namespace std;

int posi(int x)
{
    if(x < 0)
        return -1;
    if(x > 0)
        return 1;
    else
        return 0;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    cout << "Informe um número: ";
    cin >> n;

    posi(n);

    cout << posi(n);

    return 0;
}
