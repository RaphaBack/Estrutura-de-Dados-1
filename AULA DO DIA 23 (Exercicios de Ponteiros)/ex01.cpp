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
    cout << "Digite um número inteiro: ";
    cin >> n;

    triplo(&n);

    cout << "O triplo é: " << n << endl;

    return 0;
}
