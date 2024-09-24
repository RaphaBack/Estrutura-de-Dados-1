#include <iostream>
#include <locale.h>

using namespace std;

void data(int* m, string* mes)
{
    if(*m == 1)
        *mes = "Janeiro";
    else if(*m == 2)
        *mes = "Fevereiro";
    else if(*m == 3)
        *mes = "Março";
    else if(*m == 4)
        *mes = "Abril";
    else(*m == 5)
        *mes = "Maio";
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int d,m,a;
    string mes;

    do
    {
    cout << "Informe o dia de hoje: " << endl;
    cin >> d;
    cout << "Informe o mes atual: " << endl;
    cin >> m;
    cout << "Informe o ano atual: " << endl;
    cin >> a;
    }while((d < 0) || (d >= 30) || (m < 0) || (m > 12) || (a < 1900) || (a > 2024));

    data(&m, &mes);

    cout << d << " de " <<  mes << " de " << a;





    return 0;
}
