#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int m[4][4];
    int i,j;


    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout << "Informe um número para a linha " << i+1 << ", e coluna " << j+1 << " da matriz: ";
            cin >> m[i][j];
        }
    }

    cout << endl;

    cout << "Matriz: " << endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout << m[i][j] << "     ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Diagonal Principal: " << endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
                cout << m[i][j] << "     ";
            else
                cout << "     ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Os valores da última linha são: " << endl;
    for(i=0;i<1;i++)
    {
        for(j=0;j<4;j++)
        {
        cout << m[3][j] << " ";
        }
    }


    return 0;
}
