#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

void calc(double* r, double* v)
{
    *v = (4.0/3.0) * M_PI * pow(*r, 3);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double r,v;

    do
    {
     cout << "Informe o raio da esfera: ";
     cin >> r;
     if(r < 0)
        cout << "RAIO INVÁLIDO!!!" << endl;
    }while(r < 0);

    calc(&r, &v);

    cout << "Volume total: " << v;

    return 0;
}
