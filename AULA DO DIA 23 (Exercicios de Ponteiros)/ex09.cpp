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
    cout << "Endere�o de a: " << &a << endl;
    cout << "Valor do ponteiro de a: " << *ptA << endl;
    cout << "Endere�o do ponteiro de a: " << &ptA << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Valor direto de b: " << b << endl;
    cout << "Endere�o de b: " << &b << endl;
    cout << "Valor do ponteiro de b: " << *ptB << endl;
    cout << "Endere�o do ponteiro de b: " << &ptB << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Valor direto de c: " << c << endl;
    cout << "Endere�o de c: " << &c << endl;
    cout << "Valor do ponteiro de c: " << *ptC << endl;
    cout << "Endere�o do ponteiro de c: " << &ptC << endl;





    return 0;
}
