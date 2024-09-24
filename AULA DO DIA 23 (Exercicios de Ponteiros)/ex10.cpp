#include <iostream>

using namespace std;

int main()
{
    float a = 4.4 , b = 5.3;

    cout << &a << endl;
    cout << &b << endl;
    cout << endl;

    if(&a > &b)
        cout << &a << endl;
    else
        cout << &b << endl;

    cout << a << endl;
    cout << b << endl;


    return 0;
}
