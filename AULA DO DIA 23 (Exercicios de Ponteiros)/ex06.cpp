#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

void cont(int* a, int* b, double* res)
{
    *res = sqrt(pow(*a, 2) + pow(*b, 2)) / *a;
}

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int a,b;
   double res;

   do
   {
       cout << "Informe o valor de A: ";
       cin >> a;
       cout << "Informe o valor de B: ";
       cin >> b;
   }while(a < 0 || b < 0);

   cont(&a,&b,&res);

   cout << "Valor de x: " << res;

   return 0;
}
