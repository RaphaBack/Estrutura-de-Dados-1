#include <iostream>
#include <locale.h>

using namespace std;

void troca(double* x, double* y, double* temp)
{
    *temp = *x;
    *x = *y;
    *y = *temp;
}


int main()
{
    setlocale(LC_ALL, "Portuguese");

    double x,y,temp;

    cout << "Informe o 1° número: ";
    cin >> x;
    cout << "Informe o 2° numero: ";
    cin >> y;

    cout << x << " e " << y << endl;

    troca(&x,&y,&temp);

    cout << "Números trocados: " << x << " e " << y;


}