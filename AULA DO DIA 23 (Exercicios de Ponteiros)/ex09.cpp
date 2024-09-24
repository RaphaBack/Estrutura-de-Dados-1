#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a = 4;
    float b = 3.5;
    char c = 'x';
    int *ptA;
    float *ptB;
    char *ptC;

    ptA = &a;
    ptB = &b;
    ptC = &c;

    cout << "Valor direto de a: " << a << endl;
    cout << "Endereço de a: " << &a << endl;
    cout << "Valor do ponteiro de a: " << *ptA << endl;
    cout << "Endereço do ponteiro de a: " << &ptA << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Valor direto de b: " << b << endl;
    cout << "Endereço de b: " << &b << endl;
    cout << "Valor do ponteiro de b: " << *ptB << endl;
    cout << "Endereço do ponteiro de b: " << &ptB << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Valor direto de c: " << c << endl;
    cout << "Endereço de c: " << &c << endl;
    cout << "Valor do ponteiro de c: " << *ptC << endl;
    cout << "Endereço do ponteiro de c: " << &ptC << endl;





    return 0;
}
