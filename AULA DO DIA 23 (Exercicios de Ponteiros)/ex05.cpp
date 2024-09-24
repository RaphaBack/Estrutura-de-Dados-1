#include <iostream>
#include <locale.h>

using namespace std;

void seg(int *x,int *y,int *z,int *res)
{
   *res = (*x * 3600) + (*y * 60) + *z;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1,n2,n3,res;

    do
    {
    cout << "Informe as horas: ";
    cin >> n1;
    cout << "Informe os minutos: ";
    cin >> n2;
    cout << "Informe os segundos: ";
    cin >> n3;
    }while(n1 < 0 || n2 < 0 || n3 < 0);

    seg(&n1,&n2,&n3,&res);

    cout << "Total de segundos: " << res;

    return 0;
}
