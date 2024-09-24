#include <iostream>

using namespace std;

void gasto(double* km,double* l, double* res, string* consumo)
{
    *res = *km / *l;

    if(*res < 8)
        *consumo = "Venda o carro!";
    else if(*res > 8 && *res < 14)
        *consumo = "Econômico!";
    else
        *consumo = "Super econômico!";
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double km,l,res;
    string consumo;

    do
    {
        cout << "Informe a kilometragem rodada: ";
        cin >> km;
        cout << "Informe a quantidade de litros gasto: ";
        cin >> l;
    }while(km < 0 || l < 0);

    gasto(&km,&l,&res,&consumo);

    cout << consumo;


    return 0;
}
