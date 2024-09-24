#include <iostream>
#include <locale.h>

using namespace std;

void soma(int x,int y,int *r)
{
    *r = x+y;
}

int main()
{
   setlocale(LC_ALL, "Portuguese");
   int x,y,r;
   cout << "Informe a nota 1: ";
   cin >> x;
   cout << "Informe a nota 2: ";
   cin >> y;
   soma(x,y,&r);

   cout << "A soma entre " << x << " e " << y << " é igual a: " << r;

    return 0;
}

