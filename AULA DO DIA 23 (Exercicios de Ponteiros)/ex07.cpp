#include <locale.h>
#include <iostream>
#include <cmath>

using namespace std;

void cal(double* x, double* y,char* i,double* res)
{
    if(*i == '+')
        *res = *x + *y;
    else if(*i == '-')
        *res = *x - *y;
    else if(*i == '/')
        *res = *x / *y;
    else if(*i == '*')
        *res = (*x) * (*y);
    else
        *res = pow(*x, *y);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double x,y,res;
    char i;


    cout << "Informe o 1° valor: ";
    cin >> x;
    cout << "Informe o 2° valor: ";
    cin >> y;
    cout << "Informe o cálculo a ser executado com esses valores" << endl;
    cout << "[+] para somar" << endl;
    cout << "[-] para subtrair" << endl;
    cout << "[/] para dividir" << endl;
    cout << "[*] para multiplicar" << endl;
    cout << "[^] para elevar" << endl;
    cin >> i;

    cal(&x,&y,&i,&res);

    cout << "Resultado da operação: " << res;



}
