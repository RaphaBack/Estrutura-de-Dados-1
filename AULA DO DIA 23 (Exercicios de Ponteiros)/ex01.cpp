#include <iostream>
#include <locale.h>

using namespace std;

void triplo(int* num)
{
    *num = (*num * 3);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    cout << "Digite um n�mero inteiro: ";
    cin >> n;

    triplo(&n);

    cout << "O triplo �: " << n << endl;

    return 0;
}
