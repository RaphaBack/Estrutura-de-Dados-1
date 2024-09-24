#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x=2, y=10, *ptr1, *ptr2;
    char letra = 'T', *ptr3;
    ptr1 = &x;
    ptr2 = nullptr;
    cout << "Valor de ptr: " << ptr1;
    cout << "\nValor de x de forma indireta: " << *ptr1;
    cout << "\nEndereço de ptr: " << &*ptr1;
    cout << "\nValor de x: " << x;
    cout << "\nEndereço de x: " << &x;
    ptr2 = &y;
    *ptr2 = 5;

    return 0;
}
