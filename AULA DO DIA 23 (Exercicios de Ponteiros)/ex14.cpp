#include <iostream>

using namespace std;

int main() 
{
    int vet[6];  
    int *ptr = vet;  

    for (int i = 0; i < 6; i++) 
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> *(ptr + i); 
    }

    cout << "\nElementos do vetor:\n";
    for (int i = 0;i<6; i++) {
        cout << *(ptr + i) << " "; 
    }

    cout << endl;
    return 0;
}
