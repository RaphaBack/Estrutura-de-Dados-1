#include <iostream>

using namespace std;

void soma(int* a, int* b,int* res)
{
    *res = (3 * *a) + (3 * *b);
}

int main()
{
    int a,b,res;

    cout << "Informe o 1 valor: ";
    cin >> a;
    cout << "Informe o 2 valor: ";
    cin >> b;

    soma(&a,&b,&res);

    cout << "Soma do triplo dos dois números lidos: " << res;
}
