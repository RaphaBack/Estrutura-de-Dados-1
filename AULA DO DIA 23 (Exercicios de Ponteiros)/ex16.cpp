#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

void calca(double* r,double* a)
{
    *a = 4 * (M_PI * pow(*r, 2));
}


void calcv(double* r, double* v)
{
    *v = (4.0/3.0) * M_PI * pow(*r, 3);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double r,v,a;

    do
    {
     cout << "Informe o raio da esfera: ";
     cin >> r;
     if(r < 0)
        cout << "RAIO INVÁLIDO!!!" << endl;
    }while(r < 0);

    calca(&r, &a);
    calcv(&r, &v);

    cout << "Volume total: " << v << endl;
    cout << "Area total: " << a << endl;

    return 0;
}